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

	void Book::set_title(string title)
	{
		this->title = title;
	}
	string Book::get_title() const
	{
		return title;
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
