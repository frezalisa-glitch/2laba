#include "Triangle.h"
#include <iostream>
using namespace std;

Triangle::Triangle(double b, double h) : Figure("Треугольник") {
    base = new double(b);
    heightTri = new double(h);
}

Triangle::~Triangle() {
    delete base;
    delete heightTri;
}

double Triangle::CalcArea() const {
    return 0.5 * (*base) * (*heightTri);
}

void Triangle::Show() const {
    cout << "Фигура: " << name << ", основание = " << *base
        << ", высота = " << *heightTri << endl;
}