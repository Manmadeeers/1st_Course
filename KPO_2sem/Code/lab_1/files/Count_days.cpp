#include "stdafx.h"
#include "Count_days.h"

int count_days(string date,int year)
{
	int days_in_month_leap[] = { 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	int days_in_month_regular[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	//getting the number of current month
	string month_str;
	int length = date.length();
	for (int i = length - 6; i < length - 4; i++) {
		month_str += date[i];
	}
	int number_of_month = stoi(month_str);
	//getting the number of current day
	string day_str;
	for (int i = 0; i <= 1; i++) {
		day_str += date[i];
	}
	int number_of_day = stoi(day_str);
	//check if the current year is leap or not
	int days_before_date = 0;
	if (check_if_leap(year) == true) {
		
		for (int i = 0; i < number_of_month - 1; i++) {
			days_before_date += days_in_month_leap[i];
		}
		days_before_date = days_before_date + number_of_day;
	}
	else {
		for (int i = 0; i < number_of_month - 1; i++) {
			days_before_date += days_in_month_regular[i];
		}
		days_before_date = days_before_date + number_of_day;
	}
	return days_before_date;
}