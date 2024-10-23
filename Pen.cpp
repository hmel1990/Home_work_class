#include "Pen.h"
void Pen::pen_color()
{
	SetConsoleTextAttribute(h, 6);
	cout << "Pen is " << color << "\n";
	SetConsoleTextAttribute(h, 15);
}
void Pen::pen_material()
{
	SetConsoleTextAttribute(h, 13);
	cout << "Pen is " << material << "\n";
	SetConsoleTextAttribute(h, 15);
}
void Pen::pen_size()
{
	SetConsoleTextAttribute(h, 12);
	cout << "Pen is " << size << " mm long\n";
	SetConsoleTextAttribute(h, 15);
}
void Pen::is_pen_cap()
{
	SetConsoleTextAttribute(h, 9);

	if (cap == true)
	{
		cout << "Pen has a cap\n";
	}
	else
	{
		cout << "Pen has no cap\n";
	}
	SetConsoleTextAttribute(h, 15);

}
void Pen::is_pen_full()
{
	SetConsoleTextAttribute(h, 10);

	if (fullness < 30)
	{
		cout << "Pen is gonna be empty, buy new one\n";
	}
	else
	{
		cout << "Pen is full, everything OK\n";
	}
	SetConsoleTextAttribute(h, 15);

}
//__________________________________
void Pen::set_color(string color)
{
	this->color = color;
}
string Pen::get_color() const
{
	return color;
}

void Pen::set_material(string material)
{
	this->material = material;
}
string Pen::get_material() const
{
	return material;
}

void Pen::set_size(double material)
{
	if (material >= 1 && material <= 300) this->material = material;
	else throw "ќжидаетс€ целое число в диапазоне от 1 до 300 включительно.\n";
}
double Pen::get_size() const
{
	return size;
}

void Pen::set_cap(bool cap)
{
	if (cap == true || cap == false) this->cap = cap;
	else throw "ќжидаетс€ true or false";
}
bool Pen::get_cap() const
{
	return cap;
}

void Pen::set_fullness(unsigned int fullness)
{
	if (fullness >= 0 && fullness <= 100)
	{
		this->fullness = fullness;
	}
	else
	{
		throw "ќжидаетс€ целое число в диапазоне от 0 до 100 включительно.\n";
	}
}
unsigned int Pen:: get_fullness() const
{
	return fullness;
}