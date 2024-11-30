﻿#include <iostream>//подключение стандарттной библиотеки
#include <string>;//подключение библиотеки для работы со строками
#include <Windows.h>//подклчение заголовочного файла для локализации вывода
using namespace std;


void SentCheck(string sentence)//функция для сортировки по окончанию
{
	int sent_length = sentence.length();//создание переменной для вычисления длины предложения (включая пробелы)
	string tmp[100];//создание массива для добавления в него только слов из предложения
	int n = 0;//создание счётной переменной для вычисления размерности массива
	for (int i = 0; i < sent_length; i++) {//цикл для добавления только слов из предложения в массив
		if (sentence[i] != ' ') {//если не пробел
			tmp[n] += sentence[i];//добавление симолов слова по очереди
		}
		else {//если пробел - уыеличить счётную переменную на 1
			n++;
		}
	}
	string check = "ая";//строка , хранящая окончание
	int check_length = check.length();//вычисление размера строки с окончанием
	cout << "Слова , заканчивающиеся на ая:";
	for (int i = 0; i <=n; i++) {//цикл в цикле для вывода слов с заданным окончанием
		int control_var = 0;//создание счётной переменной для контроля окончания
		int tmp_length = tmp[i].length();//вычисление длины слова (нового для новой итерации)
		for (int j = tmp_length-1; j >= tmp_length - check_length; j--) {//цикл для проверки двух последних символов слова
			if (tmp[i][j] == check[check_length - (tmp_length - j)]) {//если соответствующий элемент окончания слова равен соответствующему элементу окончания
				control_var++;//увелиечние контольной переменной на 1
			}
			if (control_var == 2) {//еслди контольная переменная равна 2,то окончания равны и вывести это слово
				cout << tmp[i] << ' ';
			}
		}


	}
}

void main()//главная фунция 
{
	setlocale(LC_ALL, "Russian");//локализация консоли
	SetConsoleCP(1251);//локализация вывода
	SetConsoleOutputCP(1251);
	string sentence;//ввод предложения с клавиатуры
	cout << "Введите предложение:";
	getline(cin, sentence);
	SentCheck(sentence);//использование функции выше
}