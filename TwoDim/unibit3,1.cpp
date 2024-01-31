
using namespace std;
#include <iostream>
#include "TwoDimShape.h"
#include "ThreeDimShape.h"
#include "Thriangle.h"
#include "Circle.h"
#include "Shape.h"
#include "Rectangle.h"
#include <vector>
int main() {

    Shape* sPtr1 = new TwoDimShape(30,15,15,"shape",'@');
    Shape* sPtr2 = new ThreeDimShape(15, 20);
    Shape* sPtr3 = new Thriangle(15,15,15);
    //Shape* sPtr4 = new Circle(15,15);
    Shape* sPtr5 = new Rectangle ( 20, 20, 20, "Rectangle", 's', 20);


    vector<Shape*> myShapes;
    myShapes.push_back(sPtr1);
    myShapes.push_back(sPtr2);
    myShapes.push_back(sPtr5);
    for (int i = 0; i < myShapes.size(); i++) {
        myShapes.at(i)->print();

    }


}