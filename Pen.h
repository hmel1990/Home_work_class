#include <iostream>
#include <windows.h>
using namespace std;

class Pen
{
	string color;
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
	void set_color(string c);
	string get_color() const;
	void set_material(string m);
	string get_material() const;
	void set_size(double s);
	double get_size() const;
	void set_cap(bool c);
	bool get_cap() const;
	void set_fullness(unsigned int f);
	unsigned int get_fullness() const;
};

