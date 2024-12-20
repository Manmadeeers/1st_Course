﻿#include <iostream>
using namespace std;


void func(int* X, int sz,int mid)//функция для решения задачи
{
	int A[100], B[100];//задание массивов А и В для разделения исхлдного массива на части
	int szA = 0, szB = 0;//задание счётных переменных для определения размерности этих массивов
	int a = 0,b=0;//задание счётных переменных для корректоного добавления элементов в массивы
	for (int i = 0; i < sz; i++) {//цикл , осуществляющий условие задачи
		if (X[i] < mid) {//условие для чисел меньше среднего арифметического
			A[a] = X[i];
			a++;//прибавление 1 к счётным переменным с каждой итерацией цикла
			szA++;
		}
		if (X[i] > mid) {//условие для чисел , больших среднего арифметического
			B[b] = X[i];
			b++;//прибавление 1 к счётным переменным с каждой итерацией цикла
			szB++;
		}
	}
	cout << "Меньшие элементы массива:" << endl;//вывод меньшей части массива
	for (int i = 0; i < szA; i++) {
		cout << A[i] << endl;
	}
	cout << "Большие элементы массива:" << endl;//вывод большей части массива
	for (int i = 0; i < szB; i++) {
		cout << B[i] << endl;
	}
}

void main()//главная функция
{
	setlocale(LC_CTYPE, "Russian");
	int sz;//задание размерности исходного массива
	cout << "Введите рамерность массива:";
	cin >> sz;
	int X[100];//задание исходного массива
	cout << "Исходный массив:" << endl;
	int S = 0;//задание переменной для суммы всех элементов
	for (int i = 0; i < sz; i++) {//заполнение исходного массива рандомными элементами и вывод каждого их них
		X[i] = rand() % 99;
		cout << X[i] << endl;
		S += X[i];//добавление каждого элемента массива к переменной суммы
	}
	cout << "Сумма элементов массива:" << S << endl;//вывод общей суммы элементов массива
	int mid = S / sz;//вычисление среднего арифметического элементов массива
	cout << "Среднее арифметическое элементов:" << mid << endl;//вывод среднего арифметического элементов массива
	func(X,sz,mid);//реализация вышеописанной функции
}