#include "stdafx.h"
#include "Header.h"


void main()
{
	setlocale(LC_ALL, "Russian");
	//gettin the date from a user
	//char ex_var;
	//while (ex_var != 0) {
	//}
	string date;
	cout << "Введите дату в формате ДДММГГГГ: ";
	getline(cin, date);
	//check the input data to avoid mistakes
	int length_check = date.length();
	while (length_check > 8 || length_check < 8) {
		cout << "Ошибка формата ввода! Введите дату в необходимом формате: ";
		getline(cin, date);
		length_check = date.length();
	}

	cin.ignore(cin.rdbuf()->in_avail());
	//transfering a number of year from string to integer
	int length = date.length();
	string year_str;
	for (int i = length - 4; i < length; i++) {
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

	//count days before the current date
	cout << "Текущий день это " << count_days(date, number_of_year) << " день в году" << endl;
	//getting user's birthday
	string birthday;
	cout << "Введите ваш день рождения в формате ДДММГГГГ: ";
	getline(cin, birthday);
	//check the input data to avoid mistakes

	int b_day_check = birthday.length();
	while (b_day_check > 8 || b_day_check < 8) {
		cout << "Ошибка формата ввода! Введите дату в необходимом формате: ";
		getline(cin, birthday);
		b_day_check = birthday.length();
	}

	//clearing the buffer
	cin.ignore(cin.rdbuf()->in_avail());
	//getting the year of birth to check
	string b_year_str;
	for (int i = length - 4; i < length; i++) {
		b_year_str += birthday[i];
	}
	int b_year_num = stoi(b_year_str);
	//check if the current date is before or after the actuall birthday
	if (number_of_year > b_year_num) {
		cout << "До следующего дня рождения осталось " << days_before_birthday(date, birthday, number_of_year) << " дней" << endl;
	}
	else {
		cout << "Вы родитесь через " << not_born_yet(number_of_year,date,birthday) << " дней" << endl;
	}
	
}




