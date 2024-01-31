#pragma once
#include<string>
#include <iostream>
#include "Book.h"
using namespace std;

class Member
{
public:
	Member(string name, int age, string memberID);
	void display();
	void borrowBook(Book* book);

	void setName(string name);
	string getName();
	void setAge(int age);
	int getAge();
	void setMemberID(string memberID);
	string getMemberID();

private:
	string name;
	int age;
	string memberID;

};

