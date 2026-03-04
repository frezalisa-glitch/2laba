#include "Header.h"
#include <string>
#include <vector>

using namespace std;

void Bell::sound() {

	for (int i = 0; i < 20; i++) {
		cout << "ding " << "dong ";
	}
};

void OddEvenSeparator::add_number(int n) {
	if (n % 2 == 0) {
		evenInt.push_back(n);
	}
	else {
		oddInt.push_back(n);
	}
};

void OddEvenSeparator::even() {
	cout << "Четные числа:" << endl;
	for (int num : evenInt) {
		cout << num << "\t";
	}
	cout << endl;
};
void OddEvenSeparator::odd() {
	cout << "Нечетные числа:" << endl;
	for (int num : oddInt) {
		cout << num << "\t";
	}
};
void menuTable() {
	cout << "Меню" << endl;
	cout << "1. вызвать пустой конструктор" << endl;
	cout << "2. вызвать инициализирующий конструктор" << endl;
	cout << "3. прочитать значение из ячейки с заданными строкой и столбцом" << endl;
	cout << "4. записать число в ячейку с заданными строкой и столбцом" << endl;
	cout << "5. вернуть число строк в таблице" << endl;
	cout << "6. вернуть число столбцов в таблице" << endl;
	cout << "7. вывести на экран таблицу" << endl;
	cout << "8. вернуть среднее арифметическое значений таблицы" << endl;
	cout << "0. выйти" << endl;
	cout << "Ваш выбор: ";
}

Table::Table() {
	cout << "Привет! я пустой конструктор" << endl;
}
Table::Table(size_t rows, size_t cols) :tables(rows, vector<int>(cols, 0)) {

}

const int& Table::get_value(size_t row, size_t col) {//ссылка на элемент
	if (row >= tables.size() || col >= tables[0].size())
		throw out_of_range("Индекс вне диапазона");

	return tables[row][col];
}
void Table::set_value(size_t row, size_t col, const int& value) {//изменение элемента

	tables[row][col] = value;
}
size_t Table::n_rows() {
	return tables.size();//число строк
}
size_t Table::n_cols() {
	if (tables.size() == 0)
		return 0;
	return tables[0].size();//число столбцов
}
void Table::print() {
	for (vector<int> row : tables) {
		for (int elem : row)
			cout << elem << " ";
		cout << '\n';
	}
}
double Table::average() {
	double s = 0;
	for (std::vector<int> row : tables)
		for (int elem : row)
			s += elem;
	return s / (n_rows() * n_cols());
}
//реализация Complex
Complex::Complex(double x, double y) : re(x), im(y) {}
double Complex::Abs() { return sqrt(re * re + im * im); }
double Complex::Arg() { return atan2(im, re); }

void Complex::Print() {
	cout << re << (im >= 0 ? " + " : " - ") << abs(im) << "i" << endl;
}

void Complex::TrigPrint() {
	double r = Abs();
	double phi = Arg();
	cout << r << " * (cos(" << phi << ") + i*sin(" << phi << "))" << endl;
}

Complex Complex::Add(Complex z) { return Complex(re + z.re, im + z.im); }
Complex Complex::Sub(Complex z) { return Complex(re - z.re, im - z.im); }
Complex Complex::Mult(Complex z) {
	return Complex(re * z.re - im * z.im, re * z.im + im * z.re);
}

//реализация Stock
void Stock::Add(int w, int v) {
	boxes.push_back({ next_id++, w, v });
	cout << "Коробка добавлена! Присвоен ID: " << next_id - 1 << endl;
}

int Stock::GetByW(int min_w) {
	for (int i = (int)boxes.size() - 1; i >= 0; --i) {
		if (boxes[i].w >= min_w) {
			int id = boxes[i].id;
			boxes.erase(boxes.begin() + i);
			return id;
		}
	}
	return -1;
}

int Stock::GetByV(int min_v) {
	for (int i = (int)boxes.size() - 1; i >= 0; --i) {
		if (boxes[i].v >= min_v) {
			int id = boxes[i].id;
			boxes.erase(boxes.begin() + i);
			return id;
		}
	}
	return -1;
}