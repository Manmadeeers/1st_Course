﻿#include <iostream>//Подключение стандартной библиотеки 
#include <iomanip>//Подключение библиотеки манипуляторов
void main()//объявление функции main
{
	using namespace std;//множно не прописывать std
	setlocale(LC_CTYPE, "Russian");//Локализация
	int a =1,b=20,f=14,g=13;//объявление типа данных для переменных a,b,f,g(отвечающих за определение отступов и количество символов в ромбе),а также писвоение им значения
	char c, pb = ' ';//объявление типа данных для переменных  с и pb , и присвоение значения переменной pb
	cout << "Введите символ: ";//ввод значения переменной  с клавиатуры
	cin >> c;//ввод значения переменной с в систему
	for (int i = 0; i < 7;i++) {//цикл , отвечающий за верхнюю часть ромба 
		cout << setw(b) << setfill(pb) << pb;//опребелённое кол-во пробелов перед каждой строкой символов
		cout << setw(a) << setfill(c) << c << endl;//определённое кол-во символов в каждой строке
		a+=2;//увеличение значения переменной а , отвечающей за количество символов в каждой строке верхней части ромба ,на 2 с каждой итерацией 
		b--;//уменьшение значения переменной b, отвечающей за количество пробелов перед каждой строкой верхней части ромба ,на 1 с каждой итерацией 
	}
	for (int i = 0; i < 7; i++) {//цикл , отвечающий за нижнюю часть ромба 
		cout << setw(f) << setfill(pb) << pb;//опребелённое кол-во пробелов перед каждой строкой символов
		cout << setw(g) << setfill(c) << c << endl;//определённое кол-во символов в каждой строке
		f++;//увеличение зачения переменной f , отвечающей за кол-во пробелов перед каждой строкой символов , на 1 с каждой итерацией 
		g-=2;//уменьшение значения переменной g, отвечающей за кол-во символов в каждой строке, на 2 с каждой итерацией 
	}
}