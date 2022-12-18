#include <iostream>
#include <unistd.h>
#include <iomanip> // setprecision

void timer(int amount_min){
  while(amount_min >= 1){
    sleep(1);
    system("clear");
    std::cout << "Time Remaining: " << std::setprecision(2) << std::fixed << amount_min / 60.00 << "min or " << amount_min << "s" << std::endl; 
    amount_min--;
  }
}
void end(){
	std::cout << "\033[41m" << std::endl; // color code red
	std::cout << "Your time is up." << std::endl;
	sleep(1);
	system("notify-send 'Alarm' 'Your time is up.'");
}

int main(){
  double min = 2;
  
	while(1){

	system("play focus.mp3");
  //timer(25*60);
  timer(3);
	end();
  std::cout << "\033[0m" << std::endl; // reset color code

  system("play take-a-break.mp3");
	//timer(5*60);
	timer(3);
	end();
  std::cout << "\033[0m" << std::endl; // reset color code
	}
  
  
  return 0;
}
