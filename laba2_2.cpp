#include <iostream>
#include "Header.h"
#include <vector>
using namespace std;

int main()
{
    setlocale(LC_ALL, "rus");

    //1 zadanie
    Bell music;
    music.sound();
    cout << endl;

    //2 zadanie
    cout << "Какое количество чисел вы хотите ввести? ";
    int n, count;
    cin >> count;
    OddEvenSeparator separator;
    for (int i = 0; i < count; i++) {
        cout << "Введите число, которое хотите добавить: ";
        cin >> n;
        separator.add_number(n);

    }
    separator.even();
    separator.odd();

    //3 zadanie;
    cout << endl;
    Table t;
    int choice;

    do {
        menuTable();
        cin >> choice;
        switch (choice) {
            /*case 1: {

                break;
            }*/
        case 2:
            size_t row;
            size_t col;
            cin >> row;
            cin >> col;

            t = Table(row, col);
            break;

        case 3:
            int x, y;
            cout << "Введите строку, затем столбец через пробел: ";
            cin >> x;
            cin >> y;

            if (x >= t.n_rows() || y >= t.n_cols())
                cout << "Ошибка: индекс вне диапазона" << endl;
            else {
                cout << "Вывод значения данных ячеек" << endl;//можно и по-другому сделать!!!
                t.get_value(x, y);
            }
            break;

        case 4:
            int x2, y2, val;
            cout << "Введите строку, столбец и значение через пробел: ";
            cin >> x2;
            cin >> y2;
            cin >> val;
            t.set_value(x2, y2, val);
            break;

        case 5:
            cout << "Число строк " << t.n_rows() << endl;
            break;

        case 6:
            cout << "Число столбцов " << t.n_cols() << endl;
            break;

        case 7:
            t.print();
            break;

        case 8:
            t.average();
            break;

        case 0:
            break;

        default:
            cout << "nooo" << endl;

        }

    } while (choice != 0);

    //Задание 4
    cout << "\nЗАДАНИЕ 4\n";
    double r1, i1, r2, i2;
    cout << "Введите Re и Im для первого числа: "; cin >> r1 >> i1;
    cout << "Введите Re и Im для второго числа: "; cin >> r2 >> i2;

    Complex c1(r1, i1), c2(r2, i2);

    cout << "Сумма: "; c1.Add(c2).Print();
    cout << "Разность: "; c1.Sub(c2).Print();
    cout << "Произведение: "; c1.Mult(c2).Print();
    cout << "Тригонометрическая форма первого: "; c1.TrigPrint();

    //Задание 5
    cout << "\nЗАДАНИЕ 5\n";
    Stock myStock;
    int stockChoice;
    do {
        cout << "\n1. Добавить коробку\n2. Забрать по весу\n3. Забрать по объему\n0. Выход из склада\nВыбор: ";
        cin >> stockChoice;

        if (stockChoice == 1) {
            int w, v;
            cout << "Введите вес и объем: "; cin >> w >> v;
            myStock.Add(w, v);
        }
        else if (stockChoice == 2) {
            int minW;
            cout << "Введите минимальный вес: "; cin >> minW;
            int id = myStock.GetByW(minW);
            if (id != -1) cout << "Выдана коробка ID: " << id << endl;
            else cout << "Подходящих коробок нет.\n";
        }
        else if (stockChoice == 3) {
            int minV;
            cout << "Введите минимальный объем: "; cin >> minV;
            int id = myStock.GetByV(minV);
            if (id != -1) cout << "Выдана коробка ID: " << id << endl;
            else cout << "Подходящих коробок нет.\n";
        }
    } while (stockChoice != 0);

    return 0;
}