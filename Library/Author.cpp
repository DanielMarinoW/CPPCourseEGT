#include "Author.h"

Author::Author(string authorName, string authorLastName, string authorNat)
{
    setAuthorName(authorName);
    setAuthorLastName(authorLastName);
    setAuthorNat(authorNat);
}

void Author::setAuthorName(string authorName)
{
    this->authorName = authorName;
}

string Author::getAuthorName()
{
    return this->authorName;
}

void Author::setAuthorLastName(string authorLastName)
{
    this->authorLastName = authorLastName;
}

string Author::getAuthorLastName()
{
    return this->authorLastName = authorLastName;
}

void Author::setAuthorNat(string authorNat)
{
    this->authorNat = authorNat;
}

string Author::getAuthorNat()
{
    return this->authorNat;
}

void Author::printAuthor()
{
    cout << "Author`s name : " << getAuthorName() << " " << getAuthorLastName() << " " << getAuthorNat() << endl;
}
