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
	Pen a;
	a.print();
	Pen b("red");
	b.print();
}
