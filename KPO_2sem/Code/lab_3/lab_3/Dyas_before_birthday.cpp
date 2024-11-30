#include "stdafx.h"
#include "days_before.h"

int days_before_birthday(string date, string birthday, int number_of_year)
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

	//attempting to count days left before the next birthday

	int days_left = 0;
	//if birthay is in the next year
	if (curr_month_num > b_month_num || (curr_month_num == b_month_num && curr_day_num > b_day_num)) {
		days_left += days_in_month(curr_month_num, number_of_year) - curr_day_num;//add days left before the month end
		for (int i = curr_month_num + 1; i <= 12; i++) {//add days left untill the end of this month
			days_left += days_in_month(i, number_of_year);
		}
		for (int i = 1; i < b_month_num; i++) {//add days left untill bitrhday month in the next year
			days_left += days_in_month(i, number_of_year + 1);
		}
		days_left += b_day_num;//add days in the birthday month
	}
	//if burthday is in this year
	else {
		days_left += days_in_month(curr_month_num, number_of_year) - curr_day_num;//add days left untill the end of this month
		for (int i = curr_month_num + 1; i < b_month_num; i++) {//add days before the birthday month
			days_left += days_in_month(i, number_of_year);
		}
		days_left += b_day_num;//add days in the birthday month
	}
	return days_left;
}