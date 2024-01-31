#include <iostream>
#include "Address.h"
#include "Package.h"

int main()
{
    Address secondAdd("Ivan", "+823878323", "Pleven", "Ulica2");
    Address firstAdd("Yordan", "+876686874", "Sofia", "VS24");
    Package packageOne(firstAdd, secondAdd, 250, 100);
    Package packageTwo(secondAdd, secondAdd, 250, 100);
    packageOne.getRecipient().print();
    packageTwo.getRecipient().print();
    


    
}
