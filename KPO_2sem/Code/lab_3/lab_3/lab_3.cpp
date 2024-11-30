#include "stdafx.h"
#include "Header.h"


void main()
{
	//constants
	const int date_length = 8;
	const int year_length = 4;

	setlocale(LC_ALL, "Russian");
	string date;
	cout << "Введите дату в формате ДДММГГГГ: ";
	getline(cin, date);
	//check the input data to avoid mistakes
	int length_check = date.length();
	while (length_check > date_length || length_check < date_length) {
		cout << "Ошибка формата ввода! Введите дату в необходимом формате: ";
		getline(cin, date);
		length_check = date.length();
	}

	cin.ignore(cin.rdbuf()->in_avail());
	//transfering a number of year from string to integer
	int length = date.length();
	string year_str;
	for (int i = length - year_length; i < length; i++) {
		year_str += date[i];
	}

	int number_of_year = stoi(year_str);

	//check if this year leap or not and tell the answer
	if (check_if_leap(number_of_year) == true) {
		cout << "Этот год високосный." << endl;
	}
	else {
		cout << "Этот год не високосный." << endl;
	}
	string month_str;
	for (int i = length - 6; i < length - 4; i++) {
		month_str += date[i];
	}
	int number_of_month = stoi(month_str);
	cout << "Месяц номер " << number_of_month << " - " << define_month(number_of_month) << endl;
	//count days before the current date
	cout << "Текущий день это " << count_days(date, number_of_year) << " день в году" << endl;
	//getting user's birthday
	string birthday;
	cout << "Введите ваш день рождения в формате ДДММГГГГ: ";
	getline(cin, birthday);
	//check the input data to avoid mistakes

	int b_day_check = birthday.length();
	while (b_day_check > date_length || b_day_check <date_length) {
		cout << "Ошибка формата ввода! Введите дату в необходимом формате: ";
		getline(cin, birthday);
		b_day_check = birthday.length();
	}

	//clearing the buffer
	cin.ignore(cin.rdbuf()->in_avail());
	//getting the year of birth to check
	string b_year_str;
	for (int i = length - year_length; i < length; i++) {
		b_year_str += birthday[i];
	}
	int b_year_num = stoi(b_year_str);
	//check if the current date is before or after the actuall birthday
	if (number_of_year > b_year_num) {
		cout << "До следующего дня рождения осталось " << days_before_birthday(date, birthday, number_of_year) << " дней" << endl;
	}
	else {
		cout << "Вы родитесь через " << not_born_yet(number_of_year, date, birthday) << " дней" << endl;
	}
	int holyday;
	cout << "Введите порядковый номер дня в году , чтобы проверить наличие праздника: ";
	cin >> holyday;
	while (holyday > 365 || holyday <= 0) {
		cout << "Такого дня нет! Попробуйте ещё раз: ";
		cin >> holyday;
	}
	find_holyday(holyday);
}