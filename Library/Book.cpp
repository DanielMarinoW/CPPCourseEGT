#include "Book.h"
#include "Author.h"
#include <iostream>
using namespace std;

Book::Book(string name, Author author, string genre, int year) :author(author)
{
	setName(name);
	setGenre(genre);
	setYear(year);
	
}

void Book::print()
{
	cout << "Book name " << name << endl << endl << "Book genre " << genre << endl
		<< "Book year " << year << endl;
	this->author.printAuthor();
}

void Book::addBook()
{
	cout << "hahsdhas" << endl;
}

void Book::setName(string name)
{
	this->name = name;
}

string Book::getName()
{
	return this->name;
}


void Book::setGenre(string genre)
{
	this->genre = genre;
}

string Book::getGenre()
{
	return this->genre;
}

void Book::setYear(int year)
{
	this->year = year;
}

int Book::getYear()
{
	return year;
}
