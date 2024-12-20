﻿#include <iostream>
#include <ctime>//подключение библиотеки , овечающей за использование функции time
using namespace std;
void main()
{
	setlocale(LC_CTYPE, "Russian");
	const int N = 100;//ввод значений и определение типа данных переменных
	int sz, rmn = 0, rmx = 99;
	cout << "Введите размер массива:";//ввод размерности массива
	cin >> sz;
	double M[N] = {};//определение массива М
	srand((unsigned)time(NULL));
	for (int i = 0; i < sz; i++) {//цикл, заполняющий каждый соответствующий элемент массива рандомным числом
		M[i] = (int)(((double)rand() / (double)RAND_MAX)*99);		
		cout << M[i] << endl;
	}
	double min = M[0];//вычисление минимального элемента массива
	for (int i = 0; i < sz; i++) {//цикл , проходящийся по всем элементам массива и определяющий минимальное его значение
		if (M[i] < min) {
			min = M[i];
		}
	}
	cout << "Минимальное значение:" << min << endl;//вывод минимального значения на экран
	cout << "Новый массив:" << endl;
	cout << M[0] << endl;
	for (int i = 1; i < sz; i++) {//вывод нового массива , в котором все чётные элементы заменены на минимальное значение
		if (i % 2 == 0) {
			M[i] = min;
		}
		cout << M[i] << endl;
	}

}