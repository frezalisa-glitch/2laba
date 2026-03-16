#include "Figure.h"
#include <cstring>

Figure::Figure(const char* figureName) {
    name = new char[strlen(figureName) + 1];
    size_t len = strlen(figureName) + 1;
    name = new char[len];
    strcpy_s(name, len, figureName);
}

Figure::~Figure() {
    delete[] name;
}

double CalcCylinderVolume(const Figure* figure, double height) {
    return figure->CalcArea() * height;
}