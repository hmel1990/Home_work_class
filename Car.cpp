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
	void Car::lets_go()
	{
		fuel--;
		mileage += 10;
	}

	void Car::print()
	{
		SetConsoleTextAttribute(h, 2);
		cout << "Car has " << fuel << " liters of fuel in tank\n";
		SetConsoleTextAttribute(h, 14);
		cout << "Car mileage is	" << mileage << "km\n\n";
	}

	void Car::car_to_go()
	{
		cout << "\n|||||||||||||||||||||||||||||||||||||||||||||||||||\n";
		if (fuel <= 0) cout << "You have to refuel your car";
		else if (mileage >= 100000) cout << "You have to chek your car. Go to CTO";
		cout << "\n";

	}
	//__________________________________
	void Car::set_color(string color)
	{
		this->color = color;
	}
	string Car::get_color() const
	{
		return color;
	}

	void Car::set_brand(string brand)
	{
		this->brand = brand;
	}
	string Car::get_brand() const
	{
		return brand;
	}

	void Car::set_speed(int speed)
	{
		if (speed >= 1 && speed <= 300) this->speed = speed;
		else throw "ќжидаетс€ целое число в диапазоне от 1 до 300 включительно.\n";
	}
	int Car::get_speed() const
	{
		return speed;
	}

	void Car::set_electric(bool electric)
	{
		if (electric == true || electric == false) this->electric = electric;
	}
	bool Car::get_electric() const
	{
		return electric;
	}

	void Car::set_doors(int doors)

	{
		if (doors >= 2 && doors <= 5) this->doors = doors;
		else throw "ќжидаетс€ целое число в диапазоне от 1 до 5 включительно.\n";
	}
	int Car::get_doors() const
	{
		return doors;
	}

	void Car::set_mileage(int mileage)
	{
		if (mileage >= 1) this->mileage = mileage;
	}

	int Car::get_mileage() const
	{
		return mileage;
	}

	void Car::set_fuel(int fuel)
	{
		if (fuel >= 1 && fuel <= 60) this->fuel = fuel;
	}
	int Car::get_fuel() const
	{
		return fuel;
	}