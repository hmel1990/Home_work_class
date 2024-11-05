#include "Car.h"
	int Car::car_count = 0;

	void Car::car_brand()
	{
		SetConsoleTextAttribute(h, 3);
		cout << "Car brand is " << brand << "\n";
		SetConsoleTextAttribute(h, 15);
	}
	//____________________________________________________________________
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
	//____________________________________________________________________
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

	vector <string> Car::get_brand_shop() const
	{	
		vector <string> temp;
		for (int i = 0; i< this->size; i++) temp.push_back(brand_shop[i]);
		return temp;
	}

	void Car::add_brand_shop(string added_shop) {

		string* new_brand_shop = new string[this->size + 1];
		for (int i = 0; i < this->size; i++)
		{
			new_brand_shop[i] = brand_shop[i];
		}
		new_brand_shop [size] = added_shop;
		delete[] brand_shop;
		brand_shop = new_brand_shop;
		delete[] new_brand_shop;
		new_brand_shop = nullptr;
		this->size++;
	}

	void Car::print_brand_shop(int size)
	{
		for (size_t i = 0; i < size; i++)
		{
			cout << this->brand_shop[i]<<"\t";
		}
	}


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

	void Car::set_fuel(int fuel)
	{
		if (fuel >= 1 && fuel <= 60) this->fuel = fuel;
	}
	int Car::get_fuel() const
	{
		return fuel;
	}

	void Car::set_mileage(int mileage)
	{
		if (mileage >= 1) this->mileage = mileage;
	}

	int Car::get_mileage() const
	{
		return mileage;
	}


	Car::Car():Car("audi", new string[3]{ "Odessa", "Kyiv", "Lviv" }, 3, 50, 1000) {};										//конструктор по умолчанию без параметров

	Car::Car(string b = "audi", string* c = new string[3]{ "Odessa", "Kyiv", "Lviv"}, int c1=3, int g = 70, int h = 1000)	//конструктор по умолчанию с параметрами по умолчанию
	{
		set_brand(b);
		set_size(c1);
		set_brand_shop (c,c1);
		set_fuel(g);
		set_mileage(h);
		car_count++;
		delete[] c;
	}



	void Car::print() const												//печать всех полей класса

	{
		cout << this->brand << "\n" << this->fuel << "\n" << this->mileage << "\n";
		
		for (int i = 0; i < size; i++)
		{
			cout << this->brand_shop[i]<<"\t";
		}
	}

	int Car:: get_count() 									//подсчет количества созданых экземпл€ров класса
	{
		return car_count;
	}

	Car::~Car()												//деструктор
	{
		cout << "OPERATOR - destructor =\n";

		if (brand_shop != nullptr) delete[] brand_shop;
		brand_shop = nullptr;
		car_count--;
	}

	Car::Car(const Car& original)							//конструктор копировани€
	{
		cout << "OPERATOR - constructor_copirovaniya =\n";

		if (brand_shop != nullptr) delete[] brand_shop; 

		brand_shop = new string[original.size];

		for (int i = 0; i < original.size; i++)
		{
			brand_shop[i] = original.brand_shop[i];
		}
		//set_brand_shop(original.brand_shop,original.size);

		size = original.size;
		brand = original.brand;
		fuel = original.fuel;
		mileage = original.mileage;
	}



	
	ostream& operator << (ostream& os, const Car& f)
	{
		os << f.get_brand() << "\n" << f.get_size() << "\n" << f.get_fuel() << "\n" << f.get_mileage() << "\n";

		for (int i = 0; i < f.get_size(); i++)
		{
			os << f.get_brand_shop()[i] << "\t";
		}

		return os;

	}

	istream& operator >> (istream& is, Car& f)
	{
		string b;
		int c;
		int g, h;


		cout << "¬ведите бренд: ";
		is >> b;
		cout << "¬ведите емкость бака дл€ бензина: ";
		is >> g;
		cout << "¬ведите пробег: ";
		is >> h;
		cout << "¬ведите размер массива: ";
		is >> c;		
		
		string* j = new string[c];

		cout << "¬ведите массив из " << c << " элементов\n";
		for (int i = 0; i < c; i++)
		{
			cout << "Ёлемент " << i + 1 << ": ";
			is >> j[i];
		}

		f.set_brand(b);
		f.set_size(c);
		f.set_fuel(g);
		f.set_mileage(h);
		f.set_brand_shop(j, c);																
		delete[] j;
		return is;
	}

	bool Car::operator > (const Car& other) 
	{
		
		return this->mileage > other.get_mileage(); 
	}

	bool Car::operator < (const Car& other) 
	{

		return this->mileage < other.get_mileage();
	}

	bool Car::operator == (const Car& other) 
	{

		return this->mileage == other.get_mileage();
	}

	bool Car::operator != (const Car& other) 
	{

		return this->mileage != other.get_mileage();
	}

	Car::operator string()

	{

		cout << "Casting from Car to string\n";

		string result = brand + " " + to_string(fuel) + " " + to_string(mileage);

		for (int i = 0; i < size; i++) 
		{
			result += " " + brand_shop[i];
		}

		return result;
	}

	Car& Car::operator = (const Car& original)
	{	
		cout << "OPERATOR =\n";
		if (this == &original) 
		{
			return *this;
		}

		Car::~Car();
		Car::Car(original);
	}