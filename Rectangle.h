#pragma once
#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "Figure.h"

class Rectangle : public Figure {
private:
    double* width;
    double* heightRect;

public:
    Rectangle(double w, double h);
    ~Rectangle();

    double CalcArea() const override;
    void Show() const override;
};
#endif