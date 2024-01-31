#include "User.h"

User::User(string name)
{
    setUsername(username);
}

User::User(string username, vector<Order> purchases) : purchases(purchases)
{
    setUsername(username);
}



void User::setUsername(string username)
{
    this->username = username;
}

string User::getUsername()
{
    return this->username;
}

void User::addPurchase(Order purchase)
{
    purchases.push_back(purchase);
}

vector<Order> User::getPurchse()
{
    return vector<Order>();
}
