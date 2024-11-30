﻿#include <iostream> 
using namespace std;

void main()
{
	setlocale(LC_ALL, "Russian");//локализация консоли
	const int n = 2;//задание занчения переменной n
	int matrix[2*n][2*n];//создание многомерного массива , т е матрицы
	int mtmin = -10;//задание максимального и минимального элементов последовательности
	int mtmax = 10;
	cout << "Матрица:" << endl;
	for (int i = 0; i < 2*n; i++) {//цикл в цикле для заполнения матрицы элементами от -10 до 10 и вывода этих элементов
		for (int j = 0; j < 2*n; j++) {
			matrix[i][j] = (int)(((double)rand()/(double)RAND_MAX)*(mtmax-mtmin)+mtmin);//заполнение случайными элементами в заданном диапазоне
			cout << matrix[i][j] << ' ';//вывод элемента
		}
		cout << "\n";
	}

	cout << "Верхний левый квадрат:" << endl;//вывод левого верхнего квадрата
	for (int i = 0; i < n; i++) {//цикл в цикле для вывода левого верънего квадрата
		for (int j = 0; j < n ; j++) {
			cout << matrix[i][j] << ' ';//вывод элемента
		}
		cout << "\n";
	}

	cout << "Верхний правый квадрат:" << endl;
	for (int i = 0; i < n; i++) {//цикл в цикле для вывода правого верхнего квадрата
		for (int j =n ; j <2*n; j++) {
			cout << matrix[i][j] << ' ';//вывод элемента
		}
		cout << "\n";
	}

	cout << "Нижний левый квадрат:" << endl;
	for (int i = n ; i < 2 * n; i++) {//цикл в цикле для вывода левого нижнего квадрата
		for (int j = 0; j < n; j++) {
			cout << matrix[i][j] << ' ';//ввод элемента
		}
		cout << "\n";
	}

	cout << "Нижний правый квадрат:" << endl;
	for (int i = n; i < 2 * n; i++) {//цикл в цикле для вывода правого нижнего квадрата
		for (int j = n; j < 2 * n; j++) {
			cout << matrix[i][j] << ' ';//вывод элемента
		}
		cout << "\n";
	}

}	