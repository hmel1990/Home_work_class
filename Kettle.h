#include <iostream>
#include <windows.h>
#include <cstring>

using namespace std;

class Kettle
{
	char * color = nullptr;
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
	void set_color(const char *c);
	string get_color() const;
	void set_brand(string b);
	string get_brand() const;
	void set_capacity(int cap);
	int get_capacity() const;
	void set_power(int p);
	int get_power() const;
	void set_automatic(bool a);
	bool get_automatic() const;

	void print() const;

	Kettle();

	Kettle(const char* a, string b, int c, int d, bool e);

	Kettle(string a);


	~Kettle();

	Kettle(const Kettle& original);
};

