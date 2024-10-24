#include <iostream>
#include <windows.h>
using namespace std;
#include "Pen.h"
#include "Table.h"
#include "Car.h"
#include "Kettle.h"
#include "Book.h"

int main()
{

	cout << "\n\n";
	cout << "class Car\n";
	Car car;
	car.set_color("red");
	car.set_brand("Toyota");
	car.set_speed(180);
	car.set_electric(false);
	car.set_doors(4);
	car.set_fuel(10);
	car.set_mileage(20000);


	
	while (car.get_mileage() < 100000 && car.get_fuel() > 0)
	{
		car.lets_go();
		car.Print();
		Sleep (500);
	}
	car.car_to_go();


}
