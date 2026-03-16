#pragma once
#ifndef SQUARE_H
#define SQUARE_H

#include "Figure.h"

class Square : public Figure {
private:
    double* side;

public:
    Square(double s);
    ~Square();

    double CalcArea() const override;
    void Show() const override;
};
#endif