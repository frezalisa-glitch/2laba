#include "Circle.h"
#include <iostream>
using namespace std;

const double PI = 3.1415926535;

Circle::Circle(double r) : Figure("Круг") {
    radius = new double(r);
}

Circle::~Circle() {
    delete radius;
}

double Circle::CalcArea() const {
    return PI * (*radius) * (*radius);
}

void Circle::Show() const {
    cout << "Фигура: " << name << ", радиус = " << *radius << endl;
}