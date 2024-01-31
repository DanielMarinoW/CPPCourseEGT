#pragma once
#include <iostream>
#include <vector>
#include "Book.h"
#include "Author.h"
using namespace std;

class Library 
{
private:
	vector<Book> books;
	

public:
	void addBook(Book);
	void printVector();
	void findBook(string);

};

