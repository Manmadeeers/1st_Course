﻿#include <iostream>//подключение стандартной библиотеки
void main()//определение функции main
{
	double y, r, a = 1.75, b = 4.5e-4;//определение типа переменных как вещественного числа
	y = a * exp(-2 * b) - sqrt(1 + a);//вычисление значения y
	r = log(1 + 20 * b) / (1 + a);//вычисление значения r
	std::cout << "y=" << y;//вывод на экран значения y
	std::cout << " r=" << r;//вывод на экран значения r
}