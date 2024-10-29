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
	cout << "Class Pen\n";	//////////////////////////
	Pen a;
	a.set_color("pink");
	a.print();
	/*Pen a;
	a.print();
	Pen b("red", "metal", 130, true, 40);
	b.print();*/

	cout << "\n";

	cout << "Class Table\n";	//////////////////////////
	Table c;
	c.set_color("orange");
	c.print();

	/*Table c;
	c.print();
	Table d("red", "metal", 120, 120, true);
	d.print();*/

	cout << "\n";

	cout << "Class Kettle\n";	//////////////////////////
	Kettle e;
	e.set_color("Yellow");
	e.print();
	/*Kettle e;
	e.print();
	Kettle f("gray", "Rowenta", 2, 2000, true);
	f.print();*/

	cout << "\n";

	cout << "Class Book\n";  //////////////////////////
	Book g;
	g.set_title("Lord of the rings");
	g.print();

	/*Book g;
	g.print();
	Book h("Lord of the rings", "J. R. R. Tolkien", 480, true, 1000000);
	h.print();
	cout << "\n";*/

	HANDLE CCC = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(CCC, 6);
	cout << "Class Car\n";
	Car i;
	string arr [] = { "Toyota", "Honda", "Ford" };
	i.set_brand(arr,3);
	i.print_brand();

	/*Car i;
	i.print();
	cout << "\n";

	Car j("black");
	j.print();
	cout << "\n";

	Car l("black", "ferrari");
	l.print();
	cout << "\n";

	Car m("yellow", "ZAZ", 100);
	m.print();
	cout << "\n";

	Car n("gray", "ford", 110, false);
	n.print();
	cout << "\n";

	Car o("red", "Lanos", 250, false, 4);
	o.print();
	cout << "\n";

	Car p("green", "Toyota", 250, false, 4, 50);
	p.print();
	cout << "\n";

	Car q("white", "Porshe", 220, true, 5, 80, 30000);
	q.print();*/

}
