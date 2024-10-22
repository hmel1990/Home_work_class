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

	void Book::set_title(string t)
	{
		title = t;
	}
	string Book::get_title() const
	{
		return title;
	}

	void Book::set_author(string a)
	{
		author = a;
	}
	string Book::get_author() const
	{
		return author;
	}

	void Book::set_pages(int p)
	{
		if (p > 0) pages = p;
		else throw "���������� ������� ������ ���� ������ 0\n";
	}
	int Book::get_pages() const
	{
		return pages;
	}

	void Book::set_cover(bool c)
	{
		if (c == true || c == false) cover = c;
		else throw;
	}
	bool Book::get_cover() const
	{
		return cover;
	}

	void Book::set_price(float p)
	{
		if (p >= 0) price = p;
		else throw "���� ����� ������ ���� ������ 0\n";
	}
	float Book::get_price() const
	{
		return price;
	}