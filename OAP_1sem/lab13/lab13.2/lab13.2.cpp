﻿#include <iostream>
#include <stdio.h>
using namespace std;

void main()//главная функция
{
	setlocale(LC_ALL, "Russian");
	char str[100];//задание массива строки
	char *ps;//создание указателя на массив строки
	puts("Введите строку:");//ввод строки с клавиатуры
	gets_s(str);
	int count;//создание счётной переменной для подсчёта кол-ва нужых символов
	for (count = 0, ps = str; *ps != 0; ps++) {//цикл , который проходится по каждому элементу строки в поисках нужных символов
		if (*ps == '+') {//условие для символа +
			count++;
		}
		if (*ps == '-') {//условие для символа -
			count++;
		}
	}
	cout << "Количество знаков + и - в строке: " << count;//вывод ответа на экран

}