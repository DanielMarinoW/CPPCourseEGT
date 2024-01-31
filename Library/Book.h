#pragma once
#include <string>
#include <iostream>
#include "Author.h"
using namespace std;

enum Genre { CLASIC, FANTASY,CRIME };

class Book
{

private:
	string name;
	int year;
	Author author;
	string genre;


public:
	Book(string name, Author author, string genre, int year);
	void print();
	void addBook();

	
	void setName(string name);
	string getName();
	void setGenre(string genre);
	string getGenre();
	void setYear(int year);
	int getYear();

};

