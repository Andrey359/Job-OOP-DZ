#include <iostream>
#include <functional>
#include <vector>
#include <map>
#include <string>

using namespace std;

double db(float namber, bool b) {
	
	if (b) {
		return namber;
	}
	else {
		return 0;
	}
}

class X {
public:
	int n;
	X(int n) : n(n) {
	}
};

int main()
{
	setlocale(LC_ALL, "");

	//A
	int value = 5;
	int* integer = &value;
	int** A = &integer;
	cout << "A: " << **A << endl;

	//B
	function<float(float, bool)> B = db;
	cout <<"Функция B = " << B(4, 1) << endl;

	//C
	map<string, vector<float>> C;
	C["three"] = {3};
	cout << "C: " << endl;
	for (const auto &name : C) {
		cout << "Ключ: " <<  name.first << endl;
		for (auto vec : C["three"]) {
			cout << "Значение: " << vec << endl;;
		}
	}

	//D
	X d(2);
	vector<X*> vec;
	vec.push_back(&d);
	for (auto a : vec) {
		cout << "D: " << a->n;
	}
}

/*
Объявить переменные a, b, c, d по описанию:
A. ссылка на указатель на указатель на целые числа.
B. функция (function) возвращающая дробное число, принимающая
параметры:
a. дробное число
b. логическое значение
C. хеш-карта, где ключ - строка, значение - вектор дробных чисел.
D. указатель на вектор указателей на объекты класса X
*/