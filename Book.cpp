#include "Book.h"
	void Book::book_title()
	{
		SetConsoleTextAttribute(h, 10);
		cout << "Book title is \"" << title << "\"\n";
		SetConsoleTextAttribute(h, 15);
	}
	void Book::book_author()
	{
		SetConsoleTextAttribute(h, 3);
		cout << "Book author is " << author << "\n";
		SetConsoleTextAttribute(h, 15);
	}
	void Book::book_pages()
	{
		SetConsoleTextAttribute(h, 12);
		cout << "Book has " << pages << " pages\n";
		SetConsoleTextAttribute(h, 15);
	}
	void Book::book_cover()
	{
		SetConsoleTextAttribute(h, 9);
		if (cover)
		{
			cout << "The book has hard cover\n";
		}
		else
		{
			cout << "The book has no hard cover\n";
		}
		SetConsoleTextAttribute(h, 15);
	}
	void Book::book_price()
	{
		SetConsoleTextAttribute(h, 14);
		cout << "Book price is " << price << " $" << "\n";
		SetConsoleTextAttribute(h, 15);
	}
	//__________________________________

	void Book::set_title(const char *title)
	{
		if (this->title != nullptr) delete[] this->title;
		int length = strlen(title)+1;
		this-> title = new char[length];
		strcpy_s(this->title, (length), title);
	}
	string Book::get_title() const {
		return string(title);
	}

	void Book::set_author(string author)
	{
		this->author = author;
	}
	string Book::get_author() const
	{
		return author;
	}

	void Book::set_pages(int pages)
	{
		if (pages > 0) this->pages = pages;
		else throw "Количество страниц должно быть больше 0\n";
	}
	int Book::get_pages() const
	{
		return pages;
	}

	void Book::set_cover(bool cover)
	{
		if (cover == true || cover == false) this->cover = cover;
		else throw;
	}
	bool Book::get_cover() const
	{
		return cover;
	}

	void Book::set_price(float price)
	{
		if (price >= 0) this->price = price;
		else throw "Цена книги должна быть больше 0\n";
	}
	float Book::get_price() const
	{
		return price;
	}

	Book::Book() :Book("1984", "George Orwell", 150, true, 9.99) {}

	Book::Book(const char * a, string b, int c, bool d, float e)
	{
		set_title(a);
		set_author(b);
		set_pages(c);
		set_cover(d);
		set_price(e);
	}




	void Book::print() const
	{
		cout << this->title << "\n" << this->author << "\n" << this->pages << "\n" << this->cover << "\n" << this->price << "\n";
	}

	Book::~Book()
	{
		if(title != nullptr) delete[] title;
		title = nullptr;

	}

	Book::Book(string a) 
	{
		set_author(a);
	}
	
	Book::Book(const Book& original)
	{
		set_title(original.title);
		author = original.author;
		pages = original.pages;
		cover = original.cover;
		price = original.price;
	}

	ostream& operator << (ostream& os, const Book& f)
	{
		os << f.get_title() << "\n" << f.get_author() << "\n" << f.get_pages() << "\n" << f.get_cover() << "\n" << f.get_price() << "\n";
		return os;
	}

	istream& operator >> (istream& is, Book& f)
	{
		char b[255];
		string c;
		int g;
		bool h;
		float s;

		cout << "Введите название: ";
		is >> b;
		cout << "Введите автора: ";
		is >> c;
		cout << "Введите количество страниц: ";
		is >> g;
		cout << "Есть ли твердая обложка: ";
		is >> h;
		cout << "Введите цену: ";
		is >> s;


		f.set_title(b);
		f.set_author(c);
		f.set_pages(g);
		f.set_cover(h);
		f.set_price(s);

		return is;
	}

	bool Book::operator > (const Book& other)
	{

		return this->pages > other.get_pages();
	}

	bool Book::operator < (const Book& other)
	{

		return this->pages < other.get_pages();
	}

	bool Book::operator == (const Book& other)
	{

		return this->pages == other.get_pages();
	}

	bool Book::operator != (const Book& other)
	{

		return this->pages != other.get_pages();
	}


	Book::operator string()

	{

		cout << "Casting from Book to string\n";

		string result = author + " " + title + " " + to_string(pages) + " " + to_string(price);


		return result;
	}

	Book& Book:: operator = (Book const& original) 
	{
		
		if (this == &original) return*this;

		set_title(original.title);
		author = original.author;
		pages = original.pages;
		cover = original.cover;
		price = original.price;
	}