﻿#include <iostream>
using namespace std;
void main()
{
	setlocale(LC_CTYPE, "Russian");
	unsigned int A, mask = 1<< 7;//задание вводимого с клавиатуры числа и маски для него
	cout << "Введите целое число:";
	cin >> A;//ввод числа А
	unsigned int B = ~A, maskB = 4<<2,A1 = A;//задание вспомогательной переменой В и А1 и маски для переменной В


	cout << "Двоичная запись числа А:";//цикл для вывода двоичной записи числа А
	for (int i = 1; i <= 8; i++) {
		putchar(mask & A ? '1' : '0');
		if (i % 2 == 0) {
			putchar(' ');//вывод пробела после каждых двух битов
		}
		A <<= 1;//смещение А на один бит влево с каждой итерацией
	}


	cout << "\nЧисло А после инверсии:";//циклы для вывода числа А с инвертированными битами с 4 по 8
	for (int i = 1; i <= 3; i++) {
		putchar(mask & A1 ? '1' : '0');
		if (i % 2 == 0) {
			putchar(' ');//вывод пробела после каждых двух битов
		}
		A1<<= 1;//смещение переменной А1 на 1 бит влево с каждой итерацией

	}
	for (int i = 4; i <= 8; i++) {//цикл для вывода инвертированных битов с 4 по 8
		putchar(maskB & B ? '1' : '0');
		if (i % 2 == 0) {
			putchar(' ');//вывод пробелов после каждых двух битов
		}
		B <<= 1;//смещение В на 1 бит влево с каждой итерацией
	}

}
