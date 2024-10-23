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
void Table::set_color(string color)
{
	this->color = color;
}
string Table::get_color() const
{
	return color;
}

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
	else throw "��������� ����� ����� � ��������� �� 1 �� 250 ������������.\n";
}
int Table::get_width() const
{
	return width;
}

void Table::set_height(int height)
{
	if (height >= 100 && height <= 150) this->height = height;
	else throw "��������� ����� ����� � ��������� �� 100 �� 150 ������������.\n";
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