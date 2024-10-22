#include <iostream>
#include <Windows.h>
using namespace std;

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

	void book_title();
	void book_author();
	void book_pages();
	void book_cover();
	void book_price();
	//__________________________________

	void set_title(string t);
	string get_title() const;
	void set_author(string a);
	string get_author() const;
	void set_pages(int p);
	int get_pages() const;
	void set_cover(bool c);
	bool get_cover() const;
	void set_price(float p);
	float get_price() const;
};


