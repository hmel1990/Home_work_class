#include <iostream>
#include <windows.h>
using namespace std;

class Kettle
{
	string color;
	string brand;
	int capacity;
	int power;
	bool automatic;
	HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);

	//__________________________________
public:

	void kettle_color();
	void kettle_brand();
	void kettle_capacity();
	void kettle_power();
	void is_automatic();
	//__________________________________
	void set_color(string c);
	string get_color() const;
	void set_brand(string b);
	string get_brand() const;
	void set_capacity(int cap);
	int get_capacity() const;
	void set_power(int p);
	int get_power() const;
	void set_automatic(bool a);
	bool get_automatic() const;
};

