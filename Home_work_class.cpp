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
	setlocale(0, "");

	Car x_1;
	Car y_1;
	x_1.set_mileage(10000);
	y_1.set_mileage(20000);
	bool k = x_1 != y_1;
	cout << k;
	cout << "\n";

	Book x_2;
	Book y_2;
	x_2.set_pages(120);
	y_2.set_pages(110);
	bool k_2 = x_2 == y_2;
	cout << k_2;
	cout << "\n";

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
	cout << e;


	cout << "\n";

	cout << "Class Book\n";
	Book g;
	cout << g;

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