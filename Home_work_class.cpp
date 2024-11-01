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
	cout << "Class Pen\n";
	Pen a;
	a.set_color("pink");
	a.print();


	cout << "\n";

	cout << "Class Table\n";
	Table c;
	c.set_color("orange");
	c.print();



	cout << "\n";

	cout << "Class Kettle\n";
	Kettle e;
	e.set_color("Yellow");
	e.print();


	cout << "\n";

	cout << "Class Book\n";
	Book g;
	g.set_title("Lord of the rings");
	g.print();


	cout << "\n";

	HANDLE CCC = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(CCC, 6);
	cout << "Class Car\n";
	Car i;
	string arr[] = { "Nikolaev", "Chernovtsi", "Lutsk"};
	i.set_brand_shop(arr, 3);
	i.print();

	cout << "\n";
	cout << "\n";

	Car x(i);

	x.print();


	Pen x;
	Pen y;
	Pen z;
	cout << Pen::get_count() << "\n";	

}