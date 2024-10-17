#include <iostream>
#include <windows.h>
using namespace std;

class Pen 
{
public:
	string color;
	string material;
	double size;
	bool cap;	
	unsigned int fullness; //0-100
	HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
	//__________________________________
	void Pen_color ()
	{
		SetConsoleTextAttribute(h, 6);
		cout << "Pen is " << color <<"\n";
		SetConsoleTextAttribute(h, 15);
	}

	void Pen_material()
	{
		SetConsoleTextAttribute(h, 13);
		cout << "Pen is " << material << "\n";
		SetConsoleTextAttribute(h, 15);
	}

	void Pen_size()
	{
		SetConsoleTextAttribute(h, 12);
		cout << "Pen is " << size << " mm long\n";
		SetConsoleTextAttribute(h, 15);
	}

	void Is_pen_cap() 
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

	void Is_pen_full()
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
};

class Table
{
public:
	string color;
	string material;
	int width;
	int height;
	bool shelf;
	HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
	//__________________________________
	void Table_color()
	{
		SetConsoleTextAttribute(h, 6);
		cout << "Table is " << color << "\n";
		SetConsoleTextAttribute(h, 15);
	}

	void Table_material()
	{
		SetConsoleTextAttribute(h, 13);
		cout << "Table is made of" << material << "\n";
		SetConsoleTextAttribute(h, 15);
	}

	void Table_width()
	{
		SetConsoleTextAttribute(h, 12);
		cout << "Table width is " << width << " mm long\n";
		SetConsoleTextAttribute(h, 15);
	}

	void Table_height()
	{
		SetConsoleTextAttribute(h, 12);
		cout << "Table height is " << height << " mm long\n";
		SetConsoleTextAttribute(h, 15);
	}

	void Is_table_shelf()
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
};

class Car
{
public:
	string color;
	string brand;
	int speed;
	bool electric;
	int doors;
	HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);

	//__________________________________

	void Car_color()
	{
		SetConsoleTextAttribute(h, 2);
		cout << "Car color is " << color << "\n";
		SetConsoleTextAttribute(h, 15);
	}

	void Car_brand()
	{
		SetConsoleTextAttribute(h, 3);
		cout << "Car brand is " << brand << "\n";
		SetConsoleTextAttribute(h, 15);
	}

	void Car_speed()
	{
		SetConsoleTextAttribute(h, 12);
		cout << "Car speed is " << speed << " km/h\n";
		SetConsoleTextAttribute(h, 15);
	}

	void Is_electric()
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
};

class Kettle
{
public:
	string color;
	string brand;
	int capacity;
	int power;
	bool automatic;
	HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);

	//__________________________________

	void Kettle_color()
	{
		SetConsoleTextAttribute(h, 2);
		cout << "Kettle color is " << color << "\n";
		SetConsoleTextAttribute(h, 15);
	}

	void Kettle_brand()
	{
		SetConsoleTextAttribute(h, 3);
		cout << "Kettle brand is " << brand << "\n";
		SetConsoleTextAttribute(h, 15);
	}

	void Kettle_capacity()
	{
		SetConsoleTextAttribute(h, 12);
		cout << "Kettle capacity is " << capacity << " liters\n";
		SetConsoleTextAttribute(h, 15);
	}

	void Kettle_power()
	{
		SetConsoleTextAttribute(h, 14);
		cout << "Kettle power is " << power << " watts\n";
		SetConsoleTextAttribute(h, 15);
	}

	void Is_automatic()
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


};

class Book
{
public:
	string title;
	string author;
	int pages;
	bool cover;
	float price;
	HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);

	//__________________________________

	void Book_title()
	{
		SetConsoleTextAttribute(h, 10);
		cout << "Book title is \"" << title << "\"\n";
		SetConsoleTextAttribute(h, 15);
	}

	void Book_author()
	{
		SetConsoleTextAttribute(h, 3);
		cout << "Book author is " << author << "\n";
		SetConsoleTextAttribute(h, 15);
	}

	void Book_pages()
	{
		SetConsoleTextAttribute(h, 12);
		cout << "Book has " << pages << " pages\n";
		SetConsoleTextAttribute(h, 15);
	}

	void Book_cover()
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

	void Book_price()
	{
		SetConsoleTextAttribute(h, 14);
		cout << "Book price is " << price << " $" <<"\n";
		SetConsoleTextAttribute(h, 15);
	}
};

int main()
{
	cout << "class Pen\n";
	Pen pen;
	pen.color = "blue";
	pen.material = "plastic";
	pen.cap = true;
	pen.size = 160;
	pen.fullness = 50;

	pen.Pen_color();
	pen.Pen_material();
	pen.Pen_size();
	pen.Is_pen_cap();
	pen.Is_pen_full();

	cout << "\n\n";
	cout << "class Table\n";
	Table table;
	table.color = "brown";
	table.material = "wood";
	table.height = 80;
	table.width = 120;
	table.shelf = true;

	table.Table_color();
	table.Table_material();
	table.Table_height();
	table.Table_width();
	table.Is_table_shelf();

	cout << "\n\n";
	cout << "class Car\n";
	Car car;
	car.color = "red";
	car.brand = "Tesla";
	car.speed = 150;
	car.electric = true;
	car.doors = 4;

	car.Car_color();
	car.Car_brand();
	car.Car_speed();
	car.Is_electric();
	car.doors_number();

	cout << "\n\n";
	cout << "class Kettle\n";
	Kettle kettle;
	kettle.color = "plastic";
	kettle.brand = "Philips";
	kettle.capacity = 1;
	kettle.power = 1800;
	kettle.automatic = true;

	kettle.Kettle_color();
	kettle.Kettle_brand();
	kettle.Kettle_capacity();
	kettle.Kettle_power();
	kettle.Is_automatic();

	cout << "\n\n";
	cout << "class Book\n";
	Book book;
	book.title = "1984";
	book.author = "George Orwell";
	book.pages = 328;
	book.cover = true;
	book.price = 9.99;

	book.Book_title();
	book.Book_author();
	book.Book_pages();
	book.Book_cover();
	book.Book_price();
}
