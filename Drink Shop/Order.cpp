#include "Order.h"
#include <vector>

Order::Order(string date,string purchaseNum){
	setDate(date);
	setPurchaseNum(purchaseNum);
}

void Order::addDrink(Drinks* d) {
	this->orders.push_back(d);
}

void Order::printOrderV()
{
	for (Drinks* order : orders) {
		order->print();
	}
}

void Order::setPurchaseNum(string purchaseNum)
{
	this->purchaseNum = purchaseNum;
}

string Order::getPurchaseNum()
{
	return this->purchaseNum;
}

void Order::setTotlePrice(double totlePrice)
{
	this->totlePrice = totlePrice;
}

double Order::getTotlePrice()
{
	return this->totlePrice;
}

void Order::setDate(string date)
{
	this->date = date;
}

string Order::getDate()
{
	return this->date;
}

void Order::soldDrinks() {

}

