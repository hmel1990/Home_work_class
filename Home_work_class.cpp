#include <iostream>
#include <windows.h>
using namespace std;
#include "Pen.h"
#include "Table.h"
#include "Car.h"
#include "Kettle.h"
#include "Book.h"

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

	table.set_height(100);
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
