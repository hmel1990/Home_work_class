#include <iostream>
#include <windows.h>
#include <cstring>
#include <vector>


using namespace std;

class Car
{
	static int car_count;
	string color;
	string brand;
	string* brand_shop = nullptr;
	int size;
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
	void print_1();
	void car_to_go();

	//__________________________________

	static int get_count();
	void set_size(int size);
	int get_size() const;

	vector<string>add_brand_shop() const;

	void set_color(string c);
	string get_color() const;
	void set_brand(string b);
	string get_brand() const;
	void set_brand_shop(string* brand_shop, int size);
	vector<string> get_brand_shop (int size) const;
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


	void print() const;

	Car();

	Car(string a);

	Car(string a, string b);

	Car(string a, string b, string* c, int c1);

	Car(string a, string b, string* c, int c1, int d);

	Car(string a, string b, string* c, int c1, int d, bool e);

	Car(string a, string b, string* c, int c1, int d, bool e, int f);

	Car(string a, string b, string* c, int c1, int d, bool e, int f, int g);

	Car(string a, string b, string* c, int c1, int d, bool e, int f, int g, int h);

	void print_brand_shop(int size);

	~Car();

	Car(const Car& original);
};


