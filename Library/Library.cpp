#include "Library.h"
using namespace std;
#include <iostream>



void Library::addBook(Book b) {
	this->books.push_back(b);
}



void Library::printVector() {


	for (Book book : books) {
		book.print();
	}
}

void Library::findBook(string text)
{
	for (Book book : books) {
		if (book.getName().find(text) != string::npos) {
			cout << "We found the book " << endl;
			book.print();
			break;
		}
	}
}
