﻿#include <iostream>//Подключение стандартной библиотеки 
void main()//объявление функции main
{
	using namespace std;//множно не прописывать std
	setlocale(LC_CTYPE, "Russian");//Локализация
	int A, B, C,X;//определение типа данных для переменных  A, B, C,X
	cout << "Введите кол-во сбитых самолётов: ";//ввод значения переменной  A клавиатуры
	cin >> A;//ввод значения переменной A в систему
	cout << "Введите кол-во сбитых ракет: ";//ввод значения переменной  B клавиатуры
	cin >> B;//ввод значения переменной B в систему
	cout << "Введите кол-во сбитых спутников: ";//ввод значения переменной  C клавиатуры
	cin >> C;//ввод значения переменной C в систему
	X = A * 50 + B * 100 + C * 200;//вычисление значения переменной Х
	cout << "Общее кол-во очков: " << X << endl;//вывод на экран значения переенной Х , то есть общего кол-ва очков по заданным параметрам
}