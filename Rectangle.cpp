#include "Rectangle.h"
#include <iostream>
using namespace std;

Rectangle::Rectangle(double w, double h) : Figure("Прямоугольник") {
    width = new double(w);
    heightRect = new double(h);
}

Rectangle::~Rectangle() {
    delete width;
    delete heightRect;
}

double Rectangle::CalcArea() const {
    return (*width) * (*heightRect);
}

void Rectangle::Show() const {
    cout << "Фигура: " << name << ", ширина = " << *width
        << ", высота = " << *heightRect << endl;
}