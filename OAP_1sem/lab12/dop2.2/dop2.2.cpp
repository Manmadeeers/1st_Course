﻿#include <iostream>
using namespace std;

void func(int* K,int t,int sz)//функция для реализации условия
{
	int Ans[100];//задание массива для перестановки
	int ans = 0;//задание счётной переменной для вычисления размерности массива для ответа
	for (int i = 0; i < sz; i++) {//добаление чисел меньших t
		if (K[i] < t) {
			Ans[ans] = K[i];
			ans++;//увеличение счётной переменной на 1 с каждой итерацией
		}
	}
	for (int i = 0; i < sz; i++) {//добавление элементов больших t
		if (K[i] > t) {
			Ans[ans] = K[i];
			ans++;//увеличение счётной переменной на 1 с каждой итерацией
		}
	}
	cout << "Массив после перемтоновки:" << endl;//вывод ответа 
	for (int i = 0; i < ans; i++) {
		cout << Ans[i] << endl;
	}
}


void main()//главная функция
{
	setlocale(LC_ALL, "Russian");
	int sz;//ввод размерности массива
	cout << "Введите размерность массива К:";
	cin >> sz;
	int t;//ввод числа , с которым быдет идти сравнение
	cout << "Введите число t, с которым будет сравнение:";
	cin >> t;
	int K[100];//задание исходного массива К
	for(int i=0;i<sz;i++){//цикл для добавления элементов в массив
		K[i] = rand() % 99;
		cout << K[i] << endl;//вывод каждого элемента исходного массива
	}
	func(K, t, sz);//использование вышеописанной функции
}