﻿#include <iostream>//подключение стандартной библиотеки
void main()//объявление функции main
{
	using namespace std;//можно не прописывать std
	setlocale(LC_CTYPE, "Russian");//локализация
	float b = 0.5, a = 6, y, z;//объявление типа данных для переменных
	//переменная a заменена на значение 6
	double m[3] = { 0.4,-1,1.9 };//объявление типа данных и задание массива m
	for (int i = 0; i <= 2; i++) {//внешний цикл
		for (float j = 1; j <= 2; j += 0.5) {//внутренний цикл
			y = (m[i] - b) / (sin(a) - exp(a));//вычисление значени переменной у
			z = 3 * y + sqrt(a - 4 * j * b);//вычисление значения переменной z
			printf("y= %5.3f\t", y);//вывод на экран значнения переменной у + табуляция
			printf("z= %5.3f\n", z);//вывод на экран значения переменной z
		}
	}
}