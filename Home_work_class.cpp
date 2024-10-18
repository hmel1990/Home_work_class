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
	//__________________________________
public:
	void pen_color ()
	{
		SetConsoleTextAttribute(h, 6);
		cout << "Pen is " << color <<"\n";
		SetConsoleTextAttribute(h, 15);
	}
	void pen_material()
	{
		SetConsoleTextAttribute(h, 13);
		cout << "Pen is " << material << "\n";
		SetConsoleTextAttribute(h, 15);
	}
	void pen_size()
	{
		SetConsoleTextAttribute(h, 12);
		cout << "Pen is " << size << " mm long\n";
		SetConsoleTextAttribute(h, 15);
	}
	void is_pen_cap() 
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
	void is_pen_full()
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
	void set_color(string c)
	{
		color = c;
	}
	string get_color() const
	{
		return color;
	}

	void set_material(string m)
	{
		material = m;
	}
	string get_material() const
	{
		return material;
	}

	void set_size(double s)
	{
		if (s >= 1 && s <= 300) material = s;
		else throw "Ожидается целое число в диапазоне от 1 до 300 включительно.\n";
	}
	double get_size() const
	{
		return size;
	}

	void set_cap(bool c)
	{
		if (c == true || c == false) cap = c;
		else throw "Ожидается true or false";
	}
	bool get_cap() const
	{
		return cap;
	}

	void set_fullness(unsigned int f)
	{
		if (f >= 0 && f<=100)
		{
		fullness = f;			
		}
		else
		{
			throw "Ожидается целое число в диапазоне от 0 до 100 включительно.\n";
		}
	}
	unsigned int get_fullness() const
	{
		return fullness;
	}
};

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
	void table_color()
	{
		SetConsoleTextAttribute(h, 6);
		cout << "Table is " << color << "\n";
		SetConsoleTextAttribute(h, 15);
	}
	void table_material()
	{
		SetConsoleTextAttribute(h, 13);
		cout << "Table is made of" << material << "\n";
		SetConsoleTextAttribute(h, 15);
	}
	void table_width()
	{
		SetConsoleTextAttribute(h, 12);
		cout << "Table width is " << width << " mm long\n";
		SetConsoleTextAttribute(h, 15);
	}
	void table_height()
	{
		SetConsoleTextAttribute(h, 12);
		cout << "Table height is " << height << " mm long\n";
		SetConsoleTextAttribute(h, 15);
	}
	void is_table_shelf()
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
	void set_color(string c)
	{
		color = c;
	}
	string get_color() const
	{
		return color;
	}

	void set_material(string m)
	{
		material = m;
	}
	string get_material() const
	{
		return material;
	}

	void set_width(int w)
	{
		width = w;
	}
	int get_width() const
	{
		return width;
	}

	void set_height(int h)
	{
		height = h;
	}
	int get_height() const
	{
		return height;
	}

	void set_shelf(bool c)
	{
		shelf = c;
	}
	bool get_shelf() const
	{
		return shelf;
	}
};

class Car
{
	string color;
	string brand;
	int speed;
	bool electric;
	int doors;
	HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);

	//__________________________________
public:
	void car_color()
	{
		SetConsoleTextAttribute(h, 2);
		cout << "Car color is " << color << "\n";
		SetConsoleTextAttribute(h, 15);
	}
	void car_brand()
	{
		SetConsoleTextAttribute(h, 3);
		cout << "Car brand is " << brand << "\n";
		SetConsoleTextAttribute(h, 15);
	}
	void car_speed()
	{
		SetConsoleTextAttribute(h, 12);
		cout << "Car speed is " << speed << " km/h\n";
		SetConsoleTextAttribute(h, 15);
	}
	void is_electric()
	{
		SetConsoleTextAttribute(h, 9);

		if (electric)
		{
			cout << "The car is electric\n";
		}
		else
		{
			cout << "The car is not electric\n";
		}
		SetConsoleTextAttribute(h, 15);
	}
	void doors_number()
	{
		SetConsoleTextAttribute(h, 12);
		cout << "Car has " << doors << " doors\n";
		SetConsoleTextAttribute(h, 15);
	}
	//__________________________________
	void set_color(string c)
	{
		color = c;
	}
	string get_color() const
	{
		return color;
	}

	void set_brand(string b)
	{
		brand = b;
	}
	string get_brand() const
	{
		return brand;
	}

	void set_speed(int s)
	{
		speed = s;
	}
	int get_speed() const
	{
		return speed;
	}

	void set_electric(bool e)
	{
		electric = e;
	}
	bool get_electric() const
	{
		return electric;
	}

	void set_doors(int d)
	{
		doors = d;
	}
	int get_doors() const
	{
		return doors;
	}
};

class Kettle
{
	string color;
	string brand;
	int capacity;
	int power;
	bool automatic;
	HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);

	//__________________________________
public:

	void kettle_color()
	{
		SetConsoleTextAttribute(h, 2);
		cout << "Kettle color is " << color << "\n";
		SetConsoleTextAttribute(h, 15);
	}
	void kettle_brand()
	{
		SetConsoleTextAttribute(h, 3);
		cout << "Kettle brand is " << brand << "\n";
		SetConsoleTextAttribute(h, 15);
	}
	void kettle_capacity()
	{
		SetConsoleTextAttribute(h, 12);
		cout << "Kettle capacity is " << capacity << " liters\n";
		SetConsoleTextAttribute(h, 15);
	}
	void kettle_power()
	{
		SetConsoleTextAttribute(h, 14);
		cout << "Kettle power is " << power << " watts\n";
		SetConsoleTextAttribute(h, 15);
	}
	void is_automatic()
	{
		SetConsoleTextAttribute(h, 9);
		if (automatic)
		{
			cout << "The kettle is automatic off\n";
		}
		else
		{
			cout << "The kettle is not automatic off\n";
		}
		SetConsoleTextAttribute(h, 15);
	}
	//__________________________________
	void set_color(string c)
	{
		color = c;
	}
	string get_color() const
	{
		return color;
	}

	void set_brand(string b)
	{
		brand = b;
	}
	string get_brand() const
	{
		return brand;
	}

	void set_capacity(int cap)
	{
		capacity = cap;
	}
	int get_capacity() const
	{
		return capacity;
	}

	void set_power(int p)
	{
		power = p;
	}
	int get_power() const
	{
		return power;
	}

	void set_automatic(bool a)
	{
		automatic = a;
	}
	bool get_automatic() const
	{
		return automatic;
	}
};

class Book
{
	string title;
	string author;
	int pages;
	bool cover;
	float price;
	HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);

	//__________________________________
public:

	void book_title()
	{
		SetConsoleTextAttribute(h, 10);
		cout << "Book title is \"" << title << "\"\n";
		SetConsoleTextAttribute(h, 15);
	}
	void book_author()
	{
		SetConsoleTextAttribute(h, 3);
		cout << "Book author is " << author << "\n";
		SetConsoleTextAttribute(h, 15);
	}
	void book_pages()
	{
		SetConsoleTextAttribute(h, 12);
		cout << "Book has " << pages << " pages\n";
		SetConsoleTextAttribute(h, 15);
	}
	void book_cover()
	{
		SetConsoleTextAttribute(h, 9);
		if (cover)
		{
			cout << "The book has hard cover\n";
		}
		else
		{
			cout << "The book has no hard cover\n";
		}
		SetConsoleTextAttribute(h, 15);
	}
	void book_price()
	{
		SetConsoleTextAttribute(h, 14);
		cout << "Book price is " << price << " $" <<"\n";
		SetConsoleTextAttribute(h, 15);
	}
	//__________________________________

	void set_title(string t)
	{
		title = t;
	}
	string get_title() const
	{
		return title;
	}

	void set_author(string a)
	{
		author = a;
	}
	string get_author() const
	{
		return author;
	}

	void set_pages(int p)
	{
		pages = p;
	}
	int get_pages() const
	{
		return pages;
	}

	void set_cover(bool c)
	{
		cover = c;
	}
	bool get_cover() const
	{
		return cover;
	}

	void set_price(float p)
	{
		price = p;
	}
	float get_price() const
	{
		return price;
	}
};

int main()
{
	cout << "class Pen\n";
	Pen pen;
	pen.set_color("blue");
	cout << "Pen is " << pen.get_color() << "\n";

	pen.set_material("plastic");
	cout << "Pen is " << pen.get_material() << "\n";

	pen.set_cap(true);
	cout << (pen.get_cap() ? "Pen has a cap\n" : "Pen has no cap\n");


	pen.set_size(160);
	cout << "Pen is " << pen.get_size()<< "mm" << "\n";

	pen.set_fullness(50);
	cout << (pen.get_fullness() < 30 ? "Pen is gonna be empty, buy new one\n" : "Pen is full, everything OK\n");




	cout << "\n\n";
	cout << "class Table\n";
	Table table;

	table.set_color("brown");
	cout << "Color: " << table.get_color() << "\n";

	table.set_material("wood");
	cout << "Material: " << table.get_material() << "\n";

	table.set_width(120);
	cout << "Width: " << table.get_width() << " mm\n";

	table.set_height(75);
	cout << "Height: " << table.get_height() << " mm\n";

	table.set_shelf(true);
	cout << (table.get_shelf() ? "Table has a shelf\n" : "Table has no shelf\n");


	cout << "\n\n";
	cout << "class Car\n";
	Car car;
	car.set_color("red");
	cout << "Color: " << car.get_color() << "\n";

	car.set_brand("Toyota");
	cout << "Brand: " << car.get_brand() << "\n";

	car.set_speed(180);
	cout << "Speed: " << car.get_speed() << " km/h\n";

	car.set_electric(false);
	cout << (car.get_electric() ? "The car is electric\n" : "The car is not electric\n");

	car.set_doors(4);
	cout << "Doors: " << car.get_doors() << "\n";



	cout << "\n\n";
	cout << "class Kettle\n";
	Kettle kettle;
	kettle.set_color("black");
	cout << "Color: " << kettle.get_color() << "\n";

	kettle.set_brand("Philips");
	cout << "Brand: " << kettle.get_brand() << "\n";

	kettle.set_capacity(1);
	cout << "Capacity: " << kettle.get_capacity() << " liters\n";

	kettle.set_power(2200);
	cout << "Power: " << kettle.get_power() << " watts\n";

	kettle.set_automatic(true);
	cout << (kettle.get_automatic() ? "The kettle is automatic\n" : "The kettle is not automatic\n");


	cout << "\n\n";
	cout << "class Book\n";
	Book book;
	book.set_title("1984");
	cout << "Title: " << book.get_title() << "\n";

	book.set_author("George Orwell");
	cout << "Author: " << book.get_author() << "\n";

	book.set_pages(328);
	cout << "Pages: " << book.get_pages() << "\n";

	book.set_cover(true);
	cout << (book.get_cover() ? "The book has a hard cover\n" : "The book has no hard cover\n");

	book.set_price(19.99);
	cout << "Price: " << book.get_price() << " $\n";
}
