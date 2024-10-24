#include <iostream>
#include <windows.h>
using namespace std;

class Car
{
	string color;
	string brand;
	int speed;
	bool electric;
	int doors;
	int fuel;
	int mileage;
	HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
	//__________________________________
public:
	void car_color();
	void car_brand();
	void car_speed();
	void is_electric();
	void doors_number();
	//__________________________________
	void lets_go();
	void print();
	void car_to_go();

	//__________________________________
	void set_color(string c);
	string get_color() const;
	void set_brand(string b);
	string get_brand() const;
	void set_speed(int s);
	int get_speed() const;
	void set_electric(bool e);
	bool get_electric() const;
	void set_doors(int d);
	int get_doors() const;
	void set_fuel(int fuel);
	int get_fuel() const;
	void set_mileage(int fuel);
	int get_mileage() const;
};

