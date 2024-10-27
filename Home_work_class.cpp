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
	a.print();
	Pen b("red", "metal", 130, true, 40);
	b.print();

	cout << "\n";

	cout << "Class Table\n";
	Table c;
	c.print();
	Table d("red", "metal", 120, 120, true);
	d.print();

	cout << "\n";

	cout << "Class Kettle\n";
	Kettle e;
	e.print();
	Kettle f("gray", "Rowenta", 2, 2000, true);
	f.print();

	cout << "\n";

	cout << "Class Book\n";
	Book g;
	g.print();
	Book h("Lord of the rings", "J. R. R. Tolkien", 480, true, 1000000);
	h.print();

	cout << "Class Car\n";
	Car i;
	i.print();
	Car j("white", "Porshe", 220, true, 5, 80, 30000);
	j.print();

}
