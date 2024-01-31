#include "Drinks.h"
#include "Alcoholic.h"
#include "NonAlcoholic.h"
#include <string>
#include "User.h"
#include <vector>
#include "Order.h"
#include <iostream>
using namespace std;


int main()
{

    Drinks *dptr = new NonAlcoholic("Monster "," Energy Drink ",1.85,10.0,1.0,1.0);
    Drinks *dptr1 = new Alcoholic ("Savoi", "adasd", 5.0, 5.0, 1.700, 1.0);

    //dptr1->print();
    //cout << monster.calculatePrice() << endl;

    Order orders("22.01.2022 ", " Number: 2313 ");
    orders.addDrink(dptr);
    orders.addDrink(dptr1);

    orders.printOrderV();


    
    User user1("Daniel");
    user1.addPurchase(orders);
    for (Order o : user1.getPurchse()) {
        cout << " Purchases: " << o.getDate() << endl << " Purchase Number " << o.getPurchaseNum() << endl;
        orders.printOrderV();
    }




    //NonAlcoholic* naPtr = &monster;//ако е създадено със & го взимаме ако не е го създаваме със  "new";
    //Alcoholic* aPtr = &vodka;
    //vector<Drinks*> myDrinks;
    //myDrinks.push_back(aPtr);
    //myDrinks.push_back(naPtr);

    //for (int i = 0; i < myDrinks.size(); i++) {
    //    Alcoholic* ptr = dynamic_cast<Alcoholic*>(myDrinks.at(i));
    //    if (ptr != 0) {
    //        cout << "adsa";
    //    }
    //    else {
    //        cout << "dasdas";
    //    }
    //}



}

