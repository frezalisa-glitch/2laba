#pragma once
#ifndef FIGURE_H
#define FIGURE_H

class Figure {
protected:
    char* name;

public:
    Figure(const char* figureName);
    virtual ~Figure();

    virtual double CalcArea() const = 0;
    virtual void Show() const = 0;
};
double CalcCylinderVolume(const Figure* figure, double height);
#endif