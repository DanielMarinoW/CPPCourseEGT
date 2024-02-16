#pragma once
#include<iostream>
#include<string>
using namespace std;
class Book
{
public:
	Book(string title, string author, int pages);
	void display();

	void setTitle(string title);
	string getTitle();
	void setAuthor(string author);
	string getAuthor();
	void setPages(int pages);
	int getPages();

private:
	string title;
	string author;
	int pages;

};

