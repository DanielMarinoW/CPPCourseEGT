#pragma once
#include<string>
#include<iostream>
using namespace std;
class Book
{
public:
	Book(string title, string author, string ISBN);
	void display();

	void setTitle(string title);
	string getTitle();
	void setAuthor(string author);
	string getAuthor();
	void setISBN(string ISBN);
	string getISBN();
	bool Borrowed = false;
private:
	string title;
	string author;
	string ISBN;


};

