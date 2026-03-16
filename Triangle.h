#pragma once
#ifndef TRIANGLE_H
#define TRIANGLE_H

#include "Figure.h"

class Triangle : public Figure {
private:
    double* base;
    double* heightTri;

public:
    Triangle(double b, double h);
    ~Triangle();

    double CalcArea() const override;
    void Show() const override;
};
#endif