#include "stdafx.h"
#include "not_born_yet.h"

int not_born_yet(int number_of_year, string date, string birthday)//ñount days untill birthday if it's couple years after the entered date
{
	//getting the day of birth
	string b_day_str;
	for (int i = 0; i <= 1; i++) {
		b_day_str += birthday[i];
	}
	int b_day_num = stoi(b_day_str);
	//getting the month of birth
	string b_month_str;
	int length = birthday.length();
	for (int i = length - 6; i < length - 4; i++) {
		b_month_str += birthday[i];
	}
	int b_month_num = stoi(b_month_str);
	//getting the year of birth
	string b_year_str;
	for (int i = length - 4; i < length; i++) {
		b_year_str += birthday[i];
	}
	int b_year_num = stoi(b_year_str);
	//getting the current day
	string curr_day;
	for (int i = 0; i <= 1; i++) {
		curr_day += date[i];
	}
	int curr_day_num = stoi(curr_day);
	//getting the current month
	string curr_month;
	int length_date = date.length();
	for (int i = length - 5; i < length - 4; i++) {
		curr_month += date[i];
	}
	int curr_month_num = stoi(curr_month);
	int days_left = 0;
	days_left += days_in_month(curr_month_num, number_of_year) - curr_day_num;//add days left untill the end of this month
	for (int i = curr_month_num + 1; i <= 12; i++) {
		days_left += days_in_month(i, number_of_year);//add all the days left untill the end of this year
	}
	int check_year = number_of_year + 1;
	while (check_year < b_year_num) {//count years untill the birthday year
		if (check_if_leap(check_year) == true) {
			days_left += 366;
		}
		else {
			days_left += 365;
		}
		check_year++;
	}
	//check the year of birth if it's leap
	for (int i = 0; i < b_month_num; i++) {
		days_left += days_in_month(i, b_year_num);//add all the days untill the birthday month in the birth year
	}
	days_left += b_day_num;//add days in the birthday month
	return days_left;
}