#include "Member.h"
#include "Book.h"

Member::Member(string name, int age, string memberID)
{
    setName(name);
    setAge(age);
    setMemberID(memberID);
}

void Member::display()
{
    cout <<"Member name: "<< getName() <<endl<< "Age: " << getAge() <<endl<<
        "ID: " << getMemberID() << endl;
}

void Member::borrowBook(Book* book)
{
    if (!book->Borrowed) {
        cout << "Member: " << getName() << " " << "borrowed book: " << book->getTitle() << endl
            << "with author: " << book->getAuthor() << endl << "Books ISBN: " << book->getISBN() << endl;
        cout << endl;

        book->Borrowed = true;
    }
    else {
        cout << getName()<<" "<<"Sorry this book is taken." << endl;
        cout << endl;
    }


}

void Member::setName(string name)
{
    this->name = name;
}

string Member::getName()
{
    return this->name;
}

void Member::setAge(int age)
{
    this->age = age;
}

int Member::getAge()
{
    return this->age;
}

void Member::setMemberID(string memberID)
{
    this->memberID = memberID;
}

string Member::getMemberID()
{
    return this->memberID;
}
