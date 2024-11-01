#include <iostream>
#include <windows.h>
#include <cstring>

using namespace std;

class Table
{
	char* color = nullptr;
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
	void set_color(const char*a);
	string get_color() const;
	void set_material(string m);
	string get_material() const;
	void set_width(int w);
	int get_width() const;
	void set_height(int h);
	int get_height() const;
	void set_shelf(bool c);
	bool get_shelf() const;

	void print() const;

	Table();

	Table(const char* a, string b, int c, int d, bool e);
	Table(string a);
	~Table();

	Table(const Table& original);
};