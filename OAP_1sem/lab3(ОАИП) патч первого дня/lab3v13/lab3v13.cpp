﻿#include <iostream>//подключение стандартной библиотеки 
void main()//определение функции main
{
	double t, y, d = 0.5e-8, c = 9, a = 1.5;//опредедение типа переменнах как вещественного числа
	t = (d * c + a * sqrt(c - 1));//вычисление t
	y=0.5*t/d+exp(a);//вычисление u
	std::cout << "t=" << t;//Выведение значения t на экран
	std::cout << "  y=" << y;//Выведение значения u на экран
}