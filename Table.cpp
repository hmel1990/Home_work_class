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
void Table::set_color(string c)
{
	color = c;
}
string Table::get_color() const
{
	return color;
}

void Table::set_material(string m)
{
	material = m;
}
string Table::get_material() const
{
	return material;
}

void Table::set_width(int w)
{
	if (w >= 100 && w <= 250) width = w;
	else throw "ќжидаетс€ целое число в диапазоне от 1 до 250 включительно.\n";
}
int Table::get_width() const
{
	return width;
}

void Table::set_height(int h)
{
	if (h >= 100 && h <= 150) height = h;
	else throw "ќжидаетс€ целое число в диапазоне от 100 до 150 включительно.\n";
}
int Table::get_height() const
{
	return height;
}

void Table::set_shelf(bool c)
{
	if (c == true || c == false) shelf = c;
}
bool Table::get_shelf() const
{
	return shelf;
}