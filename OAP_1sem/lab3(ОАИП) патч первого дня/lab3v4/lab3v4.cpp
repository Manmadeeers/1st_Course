﻿#include <iostream>//подключение стандартной библиотеки
void main()//определение функции main
{
	double p, q, t = 6, y = -1.2, x = 0.4e-6;//определение типа переменных как вещественного числа
	p = 2.6 * t + cos(y / (3 * x + y));//вычисление значения p
	q = sin(t) / cos(t);//вычисление значения q
	std::cout << "p=" << p;//вывод на экран значения p 
	std::cout << " q=" << q;//вывод на экран значения q
}