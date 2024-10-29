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
	void Kettle::set_color(const char*color)
	{
		if (this->color != nullptr) delete[] this->color;
		int length = strlen(color)+1;
		this->color = new char [length];
		strcpy_s(this->color, length, color);
	}
	string Kettle::get_color() const
	{
		return string (color);
	}

	void Kettle::set_brand(string brand)
	{
		this->brand = brand;
	}
	string Kettle::get_brand() const
	{
		return brand;
	}

	void Kettle::set_capacity(int capacity)
	{
		if (capacity >= 1 && capacity <= 2) this->capacity = capacity;
		else throw "Объем должен быть от 1 до 2 включительно\n";
	}
	int Kettle::get_capacity() const
	{
		return capacity;
	}

	void Kettle::set_power(int power)
	{
		if (power >= 1000 && power <= 3000) this->power = power;
		else throw "Мощность должна быть от 1000 до 3000 Вт включительно\n";
	}
	int Kettle::get_power() const
	{
		return power;
	}

	void Kettle::set_automatic(bool automatic)
	{
		if (automatic == true || automatic == false) this->automatic = automatic;
		else throw "Invalid value for automatic mode. Must be true or false.\n";
	}
	bool Kettle::get_automatic() const
	{
		return automatic;
	}

	Kettle::Kettle() :Kettle("gray", "Tefal", 1, 1500,true) {}

	Kettle::Kettle(const char *a, string b, int c, int d, bool e)
	{
		set_color(a);
		set_brand(b);
		set_capacity(c);
		set_power(d);
		set_automatic(e);
	}



	void Kettle::print() const
	{
		cout << this->color << "\n" << this->brand << "\n" << this->capacity << "\n" << this->power << "\n" << this->automatic << "\n";
	}
	Kettle::~Kettle()
	{
		if (color != nullptr) delete[] color;
	}

	Kettle::Kettle(string a)
	{
		set_brand(a);
	}