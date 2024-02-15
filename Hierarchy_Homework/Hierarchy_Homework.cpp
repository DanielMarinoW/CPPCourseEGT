#include <iostream>

using namespace std;

class Shape {
public:
    virtual void draw() const {
        cout << "Draw a shape." << endl;
    }
    virtual ~Shape();
};

Shape::~Shape() {}

class Circle : public Shape {
public:
    void draw() const override {
        cout << "Draw a circle." << endl;
    }
};

class Rectangle : public Shape {
    void draw() const override {
        cout << "Draw a rectangle." << endl;
    }
};

int main() {

    Circle cir;
    Rectangle rec;

    Shape* sh1 = &cir;
    Shape* sh2 = &rec;

    sh1->draw();
    sh2->draw();

    return 0;
}