#include "ThreeDimShape.h"





ThreeDimShape::ThreeDimShape(int a, int h) : Shape(a) {
    this->h = h;
}

void ThreeDimShape::print() {
    cout << " We are in 3D print" << this->h;

}


double ThreeDimShape::getArea() {
    cout << "3d shape Area" << endl;
    return 0.0;
}
