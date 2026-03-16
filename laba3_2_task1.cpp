#include <iostream>
#include "Circle.h"
#include "Rectangle.h"
#include "Triangle.h"
#include "Square.h"

using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");

    Figure* figure = nullptr;
    int choice;
    double a, b, h;

    cout << "Выберите фигуру:\n";
    cout << "1 - Круг\n2 - Прямоугольник\n3 - Треугольник\n4 - Квадрат\n";
    cin >> choice;

    if (choice == 1) {
        cout << "Введите радиус: ";
        cin >> a;
        if (a <= 0) {
            cout << "Ошибка: радиус должен быть положительным.\n";
            return 1;
        }
        figure = new Circle(a);
    }
    else if (choice == 2) {
        cout << "Введите ширину и высоту: ";
        cin >> a >> b;
        if (a <= 0 || b <= 0) {
            cout << "Ошибка: размеры должны быть положительными.\n";
            return 1;
        }
        figure = new Rectangle(a, b);
    }
    else if (choice == 3) {
        cout << "Введите основание и высоту: ";
        cin >> a >> b;
        if (a <= 0 || b <= 0) {
            cout << "Ошибка: размеры должны быть положительными.\n";
            return 1;
        }
        figure = new Triangle(a, b);
    }
    else if (choice == 4) {
        cout << "Введите сторону квадрата: ";
        cin >> a;
        if (a <= 0) {
            cout << "Ошибка: сторона должна быть положительной.\n";
            return 1;
        }
        figure = new Square(a);
    }
    else {
        cout << "Ошибка: неверный выбор фигуры.\n";
        return 1;
    }

    cout << "Введите высоту цилиндра: ";
    cin >> h;
    if (h <= 0) {
        cout << "Ошибка: высота должна быть положительной.\n";
        delete figure;
        return 1;
    }

    cout << "\nКонтрольный вывод:\n";
    figure->Show();
    cout << "Высота цилиндра = " << h << endl;
    cout << "Площадь фигуры = " << figure->CalcArea() << endl;
    cout << "Объем обобщенного цилиндра = " << CalcCylinderVolume(figure, h) << endl;

    delete figure;
    return 0;
}