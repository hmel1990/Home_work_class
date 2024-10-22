#include "Car.h"

	void Car::car_color()
	{
		SetConsoleTextAttribute(h, 2);
		cout << "Car color is " << color << "\n";
		SetConsoleTextAttribute(h, 15);
	}
	void Car::car_brand()
	{
		SetConsoleTextAttribute(h, 3);
		cout << "Car brand is " << brand << "\n";
		SetConsoleTextAttribute(h, 15);
	}
	void Car::car_speed()
	{
		SetConsoleTextAttribute(h, 12);
		cout << "Car speed is " << speed << " km/h\n";
		SetConsoleTextAttribute(h, 15);
	}
	void Car::is_electric()
	{
		SetConsoleTextAttribute(h, 9);

		if (electric)
		{
			cout << "The car is electric\n";
		}
		else
		{
			cout << "The car is not electric\n";
		}
		SetConsoleTextAttribute(h, 15);
	}
	void Car::doors_number()
	{
		SetConsoleTextAttribute(h, 12);
		cout << "Car has " << doors << " doors\n";
		SetConsoleTextAttribute(h, 15);
	}
	//__________________________________
	void Car::set_color(string c)
	{
		color = c;
	}
	string Car::get_color() const
	{
		return color;
	}

	void Car::set_brand(string b)
	{
		brand = b;
	}
	string Car::get_brand() const
	{
		return brand;
	}

	void Car::set_speed(int s)
	{
		if (s >= 1 && s <= 300) speed = s;
		else throw "ќжидаетс€ целое число в диапазоне от 1 до 300 включительно.\n";
	}
	int Car::get_speed() const
	{
		return speed;
	}

	void Car::set_electric(bool e)
	{
		if (e == true || e == false) electric = e;
	}
	bool Car::get_electric() const
	{
		return electric;
	}

	void Car::set_doors(int d)

	{
		if (d >= 2 && d <= 5) doors = d;
		else throw "ќжидаетс€ целое число в диапазоне от 1 до 5 включительно.\n";
	}
	int Car::get_doors() const
	{
		return doors;
	}
