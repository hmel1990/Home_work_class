#include "Table.h"

void Table::table_color()
{
	SetConsoleTextAttribute(h, 6);
	cout << "Table is " << color << "\n";
	SetConsoleTextAttribute(h, 15);
}
void Table::table_material()
{
	SetConsoleTextAttribute(h, 13);
	cout << "Table is made of" << material << "\n";
	SetConsoleTextAttribute(h, 15);
}
void Table::table_width()
{
	SetConsoleTextAttribute(h, 12);
	cout << "Table width is " << width << " mm long\n";
	SetConsoleTextAttribute(h, 15);
}
void Table::table_height()
{
	SetConsoleTextAttribute(h, 12);
	cout << "Table height is " << height << " mm long\n";
	SetConsoleTextAttribute(h, 15);
}
void Table::is_table_shelf()
{
	SetConsoleTextAttribute(h, 9);

	if (shelf == true)
	{
		cout << "Table has a shelf\n";
	}
	else
	{
		cout << "Table has no shelf\n";
	}
	SetConsoleTextAttribute(h, 15);

}
//__________________________________
void Table::set_color(const char* color)
{
	if (this->color != nullptr) delete[] this->color;
	int length = strlen(color) + 1;
	this->color = new char[length];
	strcpy_s(this->color, length, color);
}
string Table::get_color() const
{
	return string(color);
}

//void Table::set_color(string color)
//{
//	this->color = color;
//}
//string Table::get_color() const
//{
//	return color;
//}

void Table::set_material(string material)
{
	this->material = material;
}
string Table::get_material() const
{
	return material;
}

void Table::set_width(int width)
{
	if (width >= 100 && width <= 250) this->width = width;
	else throw "ќжидаетс€ целое число в диапазоне от 1 до 250 включительно.\n";
}
int Table::get_width() const
{
	return width;
}

void Table::set_height(int height)
{
	if (height >= 100 && height <= 150) this->height = height;
	else throw "ќжидаетс€ целое число в диапазоне от 100 до 150 включительно.\n";
}
int Table::get_height() const
{
	return height;
}

void Table::set_shelf(bool shelf)
{
	if (shelf == true || shelf == false) this->shelf = shelf;
}
bool Table::get_shelf() const
{
	return shelf;
}

Table::Table() :Table("brown", "wood", 160, 100, true) {}

Table::Table(const char* a, string b, int c, int d, bool e)
{
	set_color(a);
	set_material(b);
	set_width(c);
	set_height(d);
	set_shelf(e);
}

void Table::print() const
{
	cout << this->color << "\n" << this->material << "\n" << this->width << "\n" << this->height << "\n" << this->shelf << "\n";
}

Table::~Table()
{
	if (color != nullptr) delete[] color;
	color = nullptr;

}

Table::Table(string a)
{
	set_material(a);
}

Table::Table(const Table& original)
{
	set_color(original.color);
	material = original.material;
	width = original.width;
	height = original.height;
	shelf = original.shelf;
}

