#include "Square.h"
#include <iostream>
using namespace std;

Square::Square(double s) : Figure("Квадрат") {
    side = new double(s);
}

Square::~Square() {
    delete side;
}

double Square::CalcArea() const {
    return (*side) * (*side);
}

void Square::Show() const {
    cout << "Фигура: " << name << ", сторона = " << *side << endl;
}