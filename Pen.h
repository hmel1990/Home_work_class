#include <iostream>
#include <windows.h>
#include <cstring>

using namespace std;

class Pen
{
	static int pen_count;

	char* color = nullptr;
	string material;
	double size;
	bool cap;
	unsigned int fullness; //0-100
	HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
public:
	void pen_color();
	void pen_material();
	void pen_size();
	void is_pen_cap();
	void is_pen_full();
	//__________________________________
	static int get_count();
	void set_color(const char* color);
	string get_color() const;
	void set_material(string m);
	string get_material() const;
	void set_size(double s);
	double get_size() const;
	void set_cap(bool c);
	bool get_cap() const;
	void set_fullness(unsigned int f);
	unsigned int get_fullness() const;

	void print() const;
	
	Pen();

	Pen(const char* a, string b, double c, bool d, unsigned int e);
	Pen(string a);
	~Pen();

	//Pen (string a = "green", string b = "plastic", double c = 160, bool d = true, unsigned int e = 50);

	Pen(const Pen& original);
};


