#pragma once
#include <iostream>
#include<string>
using namespace std;

class Author
{

private:
	string authorName;
	string authorLastName;
	string authorNat;

public:
	Author(string authorName, string authorLastName, string authorNat);
	
	void setAuthorName(string authorName);
	string getAuthorName();
	void setAuthorLastName(string authorLastName);
	string getAuthorLastName();
	void setAuthorNat(string authorNat);
	string getAuthorNat();
	void printAuthor();
};

