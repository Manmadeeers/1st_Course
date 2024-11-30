﻿#include <iostream>//подключение старндартной библиотеки
#include <string>//подклюение библиотеки для работы со строками
#include <Windows.h>//подклбчение заголовочного файла для локализации консоли

using namespace std;

void main()//главная функция
{
	SetConsoleCP(1251);//локализация консоли
	SetConsoleOutputCP(1251);
	string sent;//ввод предложения с клавиатуры
	cout << "Введите предложение: ";
	getline(cin, sent);
	string tmp[100];//создание временного массива для разбиения строки по словам
	int n = 0;//создание счётной переменной
	for (int i = 0; i < sent.length(); i++) {//цикл для ввода слов из предложения в массив строк
		if (sent[i] != ' ') {
			tmp[n] += sent[i];//ввод слов , но не пробелов
		}
		else {
			n++;//увеличение счётной переменной на 1
		}
	}

	string Ans[100];//ссоздание нового массива для введения только чётных элементов
	int k = 0;//создание счётной переменной
	for (int i = 0; i <= n; i++) {//цикл для ввода только чётных слов предложения в массив строк
		if (i % 2 != 0) {
			Ans[k] = tmp[i];//добавление элемента
			k++;//увеличение счётной переменной на 1 с каждой итерацией
		}
	}

	for (string& str : Ans) {//ревёрс каждого элемента получишегося массива
		reverse(str.begin(), str.end());
	}
	for (int i = 0; i <= k; i++) {//вывод ответа на экран
		cout << Ans[i] << ' ';
	}
	
}