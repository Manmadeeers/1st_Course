﻿#include <iostream>
using namespace std;

void MasCheck(int* mas,int size)//функция для реализации условия
{
	int negative_odd_count = 0;//создание счётной переменной для подсчёта кол-ва элементов
	for (int i = 0; i < size; i++) {//цикл для нахождеия таких элементов
		if (*(mas + i) < 0) {//условиие для отрицательноости
			if (i % 2 != 0) {//условие для чётности позиции
				negative_odd_count++;//увеличение счётной переменной на 1
			}
		}
	}
	cout << "Кол-во отрицательных элементов,стоящих на чётных местах в одномерном массиве:" << negative_odd_count << endl;//вывод кол-ва элеентов
}

void main()//шлавная функция
{
	setlocale(LC_ALL, "Russian");//локализация консоли
	int size;//ввод размерности массива
	cout << "Введите размерность массива:";
	cin >> size;
	int* mas;//создание указателя на оьласть памяти с массивом
	mas = new int[size];//выделение динамиечкой памяти
	for (int i = 0; i < size; i++) {//цикл для ввода элементов в массив
		cout << "Введите элемент массива:";
		cin >> mas[i];
	}
	MasCheck(mas, size);//использование вышеописанной функции
	delete[]mas;//очистка динамической памяти
}