#include "Book.h"

Book::Book(string title, string author, string ISBN)
{
    setTitle(title);
    setAuthor(author);
    setISBN(ISBN);

}

void Book::display()
{
    cout << "Book title is: "<<getTitle() << endl<<"Book author is: " << getAuthor()
        << endl<<" ISBN:  " << getISBN() << endl;
}

void Book::setTitle(string title)
{
    this->title = title;
}

string Book::getTitle()
{
    return this->title;
}

void Book::setAuthor(string author)
{
    this->author = author;
}

string Book::getAuthor()
{
    return this->author;
}

void Book::setISBN(string ISBN)
{
    this->ISBN = ISBN;
}

string Book::getISBN()
{
    return this->ISBN;
}
