#include "Kettle.h"
	void Kettle::kettle_color()
	{
		SetConsoleTextAttribute(h, 2);
		cout << "Kettle color is " << color << "\n";
		SetConsoleTextAttribute(h, 15);
	}
	void Kettle::kettle_brand()
	{
		SetConsoleTextAttribute(h, 3);
		cout << "Kettle brand is " << brand << "\n";
		SetConsoleTextAttribute(h, 15);
	}
	void Kettle::kettle_capacity()
	{
		SetConsoleTextAttribute(h, 12);
		cout << "Kettle capacity is " << capacity << " liters\n";
		SetConsoleTextAttribute(h, 15);
	}
	void Kettle::kettle_power()
	{
		SetConsoleTextAttribute(h, 14);
		cout << "Kettle power is " << power << " watts\n";
		SetConsoleTextAttribute(h, 15);
	}
	void Kettle::is_automatic()
	{
		SetConsoleTextAttribute(h, 9);
		if (automatic)
		{
			cout << "The kettle is automatic off\n";
		}
		else
		{
			cout << "The kettle is not automatic off\n";
		}
		SetConsoleTextAttribute(h, 15);
	}
	//__________________________________
	void Kettle::set_color(string c)
	{
		color = c;
	}
	string Kettle::get_color() const
	{
		return color;
	}

	void Kettle::set_brand(string b)
	{
		brand = b;
	}
	string Kettle::get_brand() const
	{
		return brand;
	}

	void Kettle::set_capacity(int cap)
	{
		if (cap >= 1 && cap <= 2) capacity = cap;
		else throw "Объем должен быть от 1 до 2 включительно\n";
	}
	int Kettle::get_capacity() const
	{
		return capacity;
	}

	void Kettle::set_power(int p)
	{
		if (p >= 1000 && p <= 3000) power = p;
		else throw "Мощность должна быть от 1000 до 3000 Вт включительно\n";
	}
	int Kettle::get_power() const
	{
		return power;
	}

	void Kettle::set_automatic(bool a)
	{
		if (a == true || a == false) automatic = a;
		else throw "Invalid value for automatic mode. Must be true or false.\n";
	}
	bool Kettle::get_automatic() const
	{
		return automatic;
	}