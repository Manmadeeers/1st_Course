#include "define_month.h"
#include "stdafx.h"
enum month {
	Январь = 1, Февраль, Март, Апрель, Май, Июнь, Июль, Август, Сентябрь, Октябрь, Ноябрь, Декабрь
};
string define_month(int month_num)
{
	string names[] = { "Январь","Февраль","Март","Апрель","Май","Июнь","Июль","Август","Сентябрь","Октябрь","Ноябрь","Декабрь"};
	if (month_num<Январь && month_num>Декабрь) {
		cout << "Такого месяца нет" << endl;
	}
	else {
		return names[month_num - 1];
	}
}