#include <iostream>
#include <Windows.h>
#include <cstring>
#include <string>
#include <vector>

using namespace std;

class Book
{
	char* title = nullptr;
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

	void set_title(const char* t);
	string get_title() const;
	void set_author(string a);
	string get_author() const;
	void set_pages(int p);
	int get_pages() const;
	void set_cover(bool c);
	bool get_cover() const;
	void set_price(float p);
	float get_price() const;

	void print() const;

	Book();

	Book(const char* a, string b, int c, bool d, float e);
	Book(string a);


	~Book();

	Book(const Book& original);

	bool operator > (const Book& other);
	bool operator < (const Book& other);
	bool operator == (const Book& other);
	bool operator != (const Book& other);

	operator string();

	Book& operator = (Book const& original);
};

ostream& operator << (ostream& os, const Book& f);
istream& operator >> (istream& is, Book& f);
