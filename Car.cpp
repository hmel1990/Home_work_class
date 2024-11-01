#include "Car.h"
	int Car::car_count = 0;

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

	void Car::print_1()
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

	void Car::set_size(int size)
	{
		if (size >= 0)
		{
			this->size = size;
		}
		else
		{
			throw "ќжидаетс€ целое число в диапазоне от 0 \n";
		}
	}

	int Car::get_size() const	
	{
		return size;
	}

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

	void Car::set_brand_shop(string * brand_shop, int size)
	{
		if (this->brand_shop != nullptr) delete[] this->brand_shop;
		this->brand_shop = new string[size];
		for (int i = 0; i < size; i++)
		{
			this->brand_shop[i] = brand_shop[i];
		}
	}

	vector <string> Car::get_brand_shop(int size) const
	{	
		vector <string> temp;
		for (int i = 0; i< size; i++)
		{
			temp.push_back(brand_shop[i]);
		}
		return temp;
	}

	//____________________________________________________________
	vector<string> Car::add_brand_shop() const {

		vector<string> temp;
	
		for (int i = 0; i < size; i++)

			temp.push_back(brand_shop[i]);

		return temp;

	}

	void Car::print_brand_shop(int size)
	{
		for (size_t i = 0; i < size; i++)
		{
			cout << this->brand_shop[i]<<"\t";
		}
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


	//Car::Car() :Car("white", "audi", 200, true, 4, 70, 20000) {}

	Car::Car() :Car("white") {}

	Car::Car(string a) :Car(a, "Toyota") {}

	Car::Car(string a, string b) : Car(a, b, new string[3]{ "Odessa", "Kyiv", "Lviv" }, 3) {}

	Car::Car(string a, string b, string* c, int c1) :Car(a, b, c, c1, 200) {}

	Car::Car(string a, string b, string* c, int c1, int d) :Car(a, b, c, c1, d, true) {}

	Car::Car(string a, string b, string* c, int c1, int d, bool e) :Car(a, b, c, c1, d, e, 4) {}

	Car::Car(string a, string b, string* c, int c1, int d, bool e, int f) :Car(a,b, c, c1, d, e, f, 70) {}

	Car::Car(string a, string b, string* c, int c1, int d, bool e, int f, int g):Car(a, b, c, c1, d, e, f, g, 20000){}

	Car::Car(string a, string b, string* c, int c1, int d, bool e, int f, int g, int h)
	{
		set_color(a);
		set_brand(b);
		set_size(c1);
		set_brand_shop (c,c1);
		set_speed(d);
		set_electric(e);
		set_doors(f);
		set_fuel(g);
		set_mileage(h);
		car_count++;

	}



	void Car::print() const												//печать всех полей класса

	{
		cout << this->color<< "\n"<< this->brand << "\n" << this->speed << "\n" << this->electric << "\n" << this->doors << "\n" << this->fuel << "\n" << this->mileage << "\n";
		
		for (int i = 0; i < size; i++)
		{
			cout << this->brand_shop[i]<<"\t";
		}
	}


	Car::~Car()												//деструктор
	{
		if (brand_shop != nullptr) delete[] brand_shop;
		brand_shop = nullptr;
		car_count--;
	}

	Car::Car(const Car& original)
	{
		set_brand_shop(original.brand_shop,original.size);

		color = original.color;
		size = original.size;
		brand = original.brand;
		speed = original.speed;
		electric = original.electric;
		doors = original.doors;
		fuel = original.fuel;
		mileage = original.mileage;
	}

	int Car:: get_count() 
	{
		return car_count;
	}
