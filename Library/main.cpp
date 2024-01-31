#include <string>
#include <iostream>
#include <vector>
#include "Book.h"
#include "Library.h"
//#include "Author.h"

using namespace std;


int main()
{
   // enum Genre { CLASIC, FANTASY, CRIME };

    //Genre gen;
    //string gener;
    //int choice;
    //cout << "Enter gener"<< endl;
   // cin >> gener;
 

    Author author1("Daniel ", "Marinov", "Kitaec");
    Author author2(" Yordan ", " Gadjalov ", " mangusta ");

    Book HarryPotter("Harry Potter", author1, "Gener", 1997);
    Book b2("ASHDASHD", author2, "NJASDA", 2003);

    Library library;

    library.addBook(b2);
    library.addBook(HarryPotter);

    library.printVector();

    library.findBook("2");
    
  

    return 0;
}


