#include "Pen.h"
int Pen::pen_count = 0;

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
// 
void Pen::set_color(const char* color)
{
	if (this->color != nullptr) delete[] this->color;
	int length = strlen(color) + 1;
	this->color = new char[length];
	strcpy_s(this->color, length, color);
}
string Pen::get_color() const
{
	return string(color);
}

void Pen::set_material(string material)
{
	this->material = material;
}
string Pen::get_material() const
{
	return material;
}

void Pen::set_size(double size)
{
	if (size >= 1 && size <= 300) this->size = size;
	else throw "Ожидается целое число в диапазоне от 1 до 300 включительно.\n";
}
double Pen::get_size() const
{
	return size;
}

void Pen::set_cap(bool cap)
{
	if (cap == true || cap == false) this->cap = cap;
	else throw "Ожидается true or false";
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
		throw "Ожидается целое число в диапазоне от 0 до 100 включительно.\n";
	}
}
unsigned int Pen:: get_fullness() const
{
	return fullness;
}

Pen::Pen():Pen ("green","plastic", 160, true, 50){}

Pen::Pen (const char*a, string b, double c, bool d, unsigned int e)
{
	set_color(a);
	set_material(b);
	set_size(c);
	set_cap(d);
	set_fullness(e);
	pen_count++;
}



void Pen::print() const
{
	cout << this-> color << "\n" << this-> material << "\n" << this-> cap << "\n" << this-> size << "\n" << this-> fullness << "\n";
}

Pen::~Pen()
{
	if (color != nullptr) delete[] color;
	color = nullptr;
	pen_count--;
}

Pen::Pen(string a)
{
	set_material(a);
}

Pen::Pen(const Pen& original)
{
	set_color(original.color);
	material = original.material;
	size = original.size;
	cap = original.cap;
	fullness = original.fullness;
}



int Pen::get_count()
{
	return pen_count;
}

ostream& operator << (ostream& os, const Pen& f)
{
	os << f.get_color() << "\n" << f.get_material() << "\n" << f.get_size() << "\n" << f.get_cap() << "\n" << f.get_fullness() << "\n";
	return os;
}

istream& operator >> (istream& is, Pen& f)
{
	char b[255];

	string c;

	double g;
	bool h;
	unsigned int s;



	cout << "Введите цвет: ";
	is >> b;
	cout << "Введите материал: ";
	is >> c;
	cout << "Введите размер: ";
	is >> g;
	cout << "Есть ли колпачек: ";
	is >> h;
	cout << "На сколько заполнена: ";
	is >> s;


	f.set_color(b);
	f.set_material(c);
	f.set_size(g);
	f.set_cap(h);
	f.set_fullness(s);

	return is;
}

bool Pen::operator > (const Pen& other)
{

	return this->size > other.get_size();
}

bool Pen::operator < (const Pen& other)
{

	return this->size < other.get_size();
}

bool Pen::operator == (const Pen& other)
{

	return this->size == other.get_size();
}

bool Pen::operator != (const Pen& other)
{

	return this->size != other.get_size();
}


Pen::operator string()

{

	cout << "Casting from Pen to string\n";

	string result = material + " " + color + " " + to_string(size) + " " + to_string(fullness);

	return result;
}


Pen& Pen:: operator = (Pen const& original)
{

	if (this == &original) return*this;

	set_color(original.color);
	material = original.material;
	size = original.size;
	fullness = original.fullness;
}

