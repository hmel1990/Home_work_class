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

	Car f;
	cout << (string)f << "\n"; 

	Book b;
	cout << (string)b << "\n";

	Table c;
	cout << (string)c << "\n";


	string arr[] = { "Lutsk", "Odessa", "Lviv" };

	Car x;
	cout << x;

	x.set_brand_shop(arr, 3);


	Car t;
	cout << t; 

	t = x;
	cout << t; 



}