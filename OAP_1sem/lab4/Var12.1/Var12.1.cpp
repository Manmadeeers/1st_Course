﻿#include<iostream>//Подключение стандартной библиотеки 
#include <iomanip>//Подключение библиотеки манипуляторов
void main()//объявление функции main
{
	using namespace std;//множно не прописывать std
	setlocale(LC_CTYPE, "Russian");//Локализация
	char c, pb=' ';//определение типа данных для переменных c и pb
	cout << "Введите символ: ";//Ввод символа с с клавиатуры
	cin >> c;//ввод значения переменной с в систему
	for (int i = 1; i < 10; i++)//цикл , отвечающий за печать 9-ти верхних символов
	{
		cout << setw(20) << setfill(pb) <<pb;//заполнение начала каждой строки (с 1-й по 9-ую) двадцатью пробелами 
		cout << c << endl;//выведение символа с после каждого заполнения пробелами (с 1-й по 9-ую строки )
	}
	cout << setw(42) << setfill(c) << c << endl;//выведение центральной часть знака + , состоящей из 42-х символов с
	for (int i = 1; i <10; i++)//цикл , отвечающий за печать 9-ти нижних символов
	{
		cout << setw(20) << setfill(pb) <<pb; //заполнение начала каждой строки(с 11 - й по 19 - ую) двадцатью пробелами
		cout  << c << endl;//выведение символа с после каждого заполнения пробелами (с 11-й по 19-ую строки )
	}
}