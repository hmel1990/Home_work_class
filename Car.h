#include <iostream>
#include <windows.h>
#include <cstring>
#include <vector>
#include <string>


using namespace std;

class Car
{
	static int car_count;
	//string color;
	string brand;
	string* brand_shop = nullptr;
	int size;
	//int speed;
	//bool electric;
	//int doors;
	int fuel;
	int mileage;
	HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
	//____________________________________________________________________
public:
	void car_brand();
	//____________________________________________________________________
	void lets_go();
	void print_1();
	void car_to_go();
	//____________________________________________________________________
	void set_brand(string b);
	string get_brand() const;


	void set_brand_shop(string* brand_shop, int size);
	vector<string> get_brand_shop () const;
	void add_brand_shop(string added_shop);
	void print_brand_shop(int size);

	void set_size(int size);
	int get_size() const;
	void set_fuel(int fuel);
	int get_fuel() const;
	void set_mileage(int fuel);
	int get_mileage() const;


	static int get_count();
	void print() const;
	//____________________________________________________________________

	Car();

	Car(string b, string* c, int c1, int g, int h);


	~Car();

	Car(const Car& original);

	bool operator > (const Car& other);
	bool operator < (const Car& other);
	bool operator == (const Car& other);
	bool operator != (const Car& other);


	operator string();

	Car& operator= (const Car& original);

};
	ostream& operator << (ostream& os, const Car& f);
	istream& operator >> (istream& is, Car& f);



