
#include <iostream>
#include <string>
#include "Adress.h"
#include "Package.h"
using namespace std;

int main()
{
	Adress firstAdd(" daniel ", "31203491312", " Sofia ", "sdas");
	Adress secondAdd(" ivan ", " 321313513 ", "Lovech", "DASDSA");
	

	Package packageOne(firstAdd, firstAdd, 250, 123);
	packageOne.getRecipient().print();





	return 0;
}

