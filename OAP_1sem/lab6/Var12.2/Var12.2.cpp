﻿#include <iostream>//подключение стандартной библиотеки
void main()//объявление функции main
{
	using namespace std;//можно не прописывать std
	setlocale(LC_CTYPE, "Russian");//локализация
	float j=2,b = 0.5, m = 8, a = 6,y,z;//объявление типа данных для переменных 
	//переменная a заменена на значение 20
	while (j <=3) {//цикл
		y = (m - b) / (sin(a) - exp(a));//вычисление значения переменной у
		z = 3 * y + sqrt(a - 4 * j * b);//вычисление значения переменной z
		printf("y= %5.3f\t", y);//вывод значения переменной у на экран с отступом
		printf("z= %5.3f\n", z);//вывод на экран значения переменной z
		j = j + 0.5;//прибавление к заданному значения переменной j 0,5 с каждой итерацией цикла до тех пор , пока j не будет равно 3
	}
}