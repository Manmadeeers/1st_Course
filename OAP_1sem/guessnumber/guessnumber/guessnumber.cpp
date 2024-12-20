﻿#include <iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "Russian");//локлизация консоли
	srand(time(0));
	int number_to_guess = rand() % 100 + 1;//присвоение переменной рандомног значения от 1 до 100
	cout << "Компьютер загадал число,попробуйте угадать!" << endl;
	int users_guess;//создание переменной для ввода догадок пользователя
	int amm_of_fails = 0;//создание счётной переменной для подсчёта количества неудачных попыток
	int sw;//создание переменной , с которой будет оперировать switch
	do {//цикл с постусловием
		cout << "Введите вашу догадку:";
		cin >> users_guess;//ввод догадки
		int diff = number_to_guess - users_guess;//создание переменной для вычисления разницы между загаданным числом и введённым с клавиатуры
		if (users_guess > 100 || amm_of_fails < 0) {//если введённое число не соответствует нужному диапозону
			cout << "Загаданное число находится в диапозоне от 1 до 100";//вывод сообщения
		}
		if (users_guess == number_to_guess) {//если число угадано
			break;//выйти из цикла
		}
		if (users_guess != number_to_guess) {//если число не угадано
			amm_of_fails++;//увеличение счётной переменной для кол-ва неудач на 1
		}
		if (diff < 0 && abs(diff)>20) {//если разбежка слишком большая
			cout << "Холодно , нужно меньше."<<endl;
		}
		else if (diff > 0 && abs(diff)>20) {//если разбежка слишком большая
			cout << "Холодно, нужно больше."<<endl;
		}
		if ( diff < 0 && abs(diff) < 10) {//если введённое число рядом с загаданным , но немного больше
			cout << "Уже теплее , но нужно немного меньше..."<<endl;
		}
		else if ( diff > 0 && abs(diff) < 10) {//если введённое число рядом с загаданным , но немного меньше
			cout << "Уже теплее , но немного больше..." << endl;
		}
		if (amm_of_fails==10) {//если неудачных попыток 10
			cout << "Хотите подсказку?(1-Да,2-Нет)";//предложение подсказки
			cin >>sw;
			switch (sw) {//оператор switch для принятия или отклонения подсказки
			case 1:cout << "Загаданное число находится в диапозоне от " << number_to_guess - 5 << "до " << number_to_guess + 5 << endl; break;
			case 2: cout << "Ладно"; break;
			}
		}


	} while (users_guess != number_to_guess);//условие заврешения цикла
	cout << "Поздравляю!Вы угадали! Это действительно было число " << number_to_guess;//вывод сообщения , если число угадано

}