#pragma once
#include <string>
#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

class Bell {
public:
	void sound();
};

class OddEvenSeparator {
private:
	vector<int> evenInt;
	vector<int> oddInt;
public:
	void even();
	void odd();
	void add_number(int n);
};

void menuTable();

class Table {
private:
	vector <vector<int>> tables;//двумерный вектор
public:
	Table();//пустой конструктор
	Table(size_t rows, size_t cols);//инициализирующий конструктор
	const int& get_value(size_t row, size_t col);  // прочитать значение из ячейки со строкой row, столбцом col.
	void set_value(size_t row, size_t col, const int& value);  // записать число в ячейку со строкой row, столбцом col.
	size_t n_rows();  // вернуть число строк в таблице.
	size_t n_cols();  // вернуть число столбцов в таблице.
	void print();  // вывести на экран всю таблицу.
	double average();  // вернуть среднее арифметическое всех значений таблицы.
};

//Задание 4
class Complex {
private:
	double re, im;
public:
	Complex(double x = 0, double y = 0);
	double Abs();
	double Arg();
	void Print();
	void TrigPrint();
	Complex Add(Complex z);
	Complex Sub(Complex z);
	Complex Mult(Complex z);
};

//Задание 5
struct Box {
	int id, w, v;
};

class Stock {
private:
	vector<Box> boxes;
	int next_id = 0;
public:
	void Add(int w, int v);
	int GetByW(int min_w);
	int GetByV(int min_v);
};