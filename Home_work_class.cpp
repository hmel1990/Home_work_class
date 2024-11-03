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
	Car x_1;
	Car y_2;
	x_1.set_mileage(10000);
	y_2.set_mileage(20000);
	bool k = x_1 != y_2;
	cout << k;

	setlocale(0, "");
	cout << "Class Pen\n";
	Pen a;
	a.set_color("pink");
	a.print();


	cout << "\n";

	cout << "Class Table\n";
	Table c;
	cin >> c;
	cout << c;



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
	cin >> i;
	cout << i;

	/*for (int i = 0; i < 10000000; i++)
	{
		Car t;
	}*/

}