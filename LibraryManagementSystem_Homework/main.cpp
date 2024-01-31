#include "Book.h"
#include "Member.h"
#include <string>
#include <vector>
#include <iostream>
using namespace std;

int main()
{
	vector<Book> books;
	vector<Member> members;

	Book book1("Harry Potter", "J. K. Rowling", "9780605943117");
	Book book2("Game of Thrones", "George R. R. Martin", "9780007237500");

	Member member1("Daniel", 22, "015103");
	member1.borrowBook(&book1);

	Member member4("Simona", 18, "064005");
	member4.borrowBook(&book1);

	Member member2("Liubomir", 22, "015123");
	member2.borrowBook(&book2);

	Member member3("Velislava", 20, "045114");
	member3.borrowBook(&book2);


	books.push_back(book1);
	books.push_back(book2);
	members.push_back(member1);
	members.push_back(member2);
	members.push_back(member3);
	members.push_back(member4);


	for (int i = 0; i < books.size(); i++) {
		books[i].display();
		cout << endl;
	}

	for (int i = 0; i < members.size(); i++) {
		members[i].display();
		cout << endl;
	}
}

