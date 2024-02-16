#include "Book.h"

Book::Book(string title, string author, int pages)
{
	setTitle(title);
	setAuthor(author);
	setPages(pages);
}

void Book::display()
{
	cout << "Book title is: " << title << endl << "Book author is: " << author << endl <<
		"Book have " << pages << " pages" << endl;
}

void Book::setTitle(string title)
{
	this->title = title;
}

string Book::getTitle()
{
	return this->title;
}

void Book::setAuthor(string author)
{
	this->author = author;

}

string Book::getAuthor()
{
	return this->author;
}

void Book::setPages(int pages)
{
	this->pages = pages;
}

int Book::getPages()
{
	return this->pages;
}
