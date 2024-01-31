#include "Cars.h"

Cars::Cars(string model, int year, string colour, int price)
    :model(model), year(year), colour(colour), price(price){}

//void Cars::setModel(string newModel)
//{
//    model = newModel;
//}

string Cars::getModel() const
{
    return model;
}

//void Cars::setYear(int newYear)
//{
//    year = newYear;
//}

int Cars::getYear() const
{
    return year;
}

//void Cars::setColour(string newColour)
//{
//    colour = newColour;
//}

string Cars::getColour() const
{
    return colour;
}

//void Cars::setPrice(int newPrice)
//{
//    price = newPrice;
//}

int Cars::getPrice() const
{
    return price;
}

void Cars::printInfo() const
{
    cout << "Car info: " << endl << "Car's model is: " << model << endl << "Car's year is: " << year 
        << endl << "Car's colour is: " << colour << endl << "Car's price is: " << price << endl;
}
