#pragma once
#ifndef CIRCLE_H
#define CIRCLE_H

#include "Figure.h"

class Circle : public Figure {
private:
    double* radius;

public:
    Circle(double r);
    ~Circle();

    double CalcArea() const override;
    void Show() const override;
};
#endif