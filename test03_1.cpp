#include <iostream>

class Car {
    public:
	  Car();
	  Car (int nawP, double nawV);
	  double X;
	  int P;
	  double V;
};

Car::Car() {
      X = 0;
	  }
	  
 main (){
    using namespace std;
	cout <<"\nWork by Aleksandr Uponavichs\n";
	
	Car car;
	
	cout << "\nCar X:"  << car.X;
	cout << "\nLine of car:"  << car.P;
	cout << "\nSpeed of car:"  << car.V;
	
	
	car.X = 150;
	car.P = 4;
	car.V = 70;
	
	cout << "\n\nCar X:"  << car.X;
	cout << "\nLine of car:"  << car.P;
	cout << "\nSpeed of car:"  << car.V;
	
  return 0;
}
