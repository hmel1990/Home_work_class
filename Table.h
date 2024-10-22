#include <iostream>
#include <windows.h>
using namespace std;

class Table
{
	string color;
	string material;
	int width;
	int height;
	bool shelf;
	HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
	//__________________________________
public:
	void table_color();
	void table_material();
	void table_width();
	void table_height();
	void is_table_shelf();
	//__________________________________
	void set_color(string c);
	string get_color() const;
	void set_material(string m);
	string get_material() const;
	void set_width(int w);
	int get_width() const;
	void set_height(int h);
	int get_height() const;
	void set_shelf(bool c);
	bool get_shelf() const;
};