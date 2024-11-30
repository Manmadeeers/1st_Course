#include "stdafx.h"
#include "days_before.h"

int days_before_birthday(string date, string birthday, int number_of_year)
{
	//array for days in leap year
	int days_in_month_leap[] = { 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	//array for days in regullar year
	int days_in_month_reg[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
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
	int b_year_num= stoi(b_year_str);
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
	if (curr_month_num < b_month_num) {
		//check if this year is leap
		if (check_if_leap(number_of_year) == true) {
			days_left += days_in_month_leap[curr_month_num - 1] - curr_day_num;
			for (int i = curr_month_num; i < b_month_num - 1; i++) {
				days_left += days_in_month_leap[i];
			}
			days_left += b_day_num;
		}
		//if it's not leap
		else {

			days_left += days_in_month_reg[curr_month_num - 1] - curr_day_num;
			for (int i = curr_month_num; i < b_month_num - 1; i++) {
				days_left += days_in_month_reg[i];
			}
			days_left += b_day_num;
		}
	}
	//if a birthday is in the next year
	else {
		//if the current year is leap
		if (check_if_leap(number_of_year) == true) {
			days_left += days_in_month_leap[curr_month_num - 1] - curr_day_num;
			for (int i = curr_month_num; i < 12; i++) {
				days_left += days_in_month_leap[i];
			}
			int check_next_year = number_of_year + 1;
			//check if the next year is leap or not
			if (check_if_leap(check_next_year) == true) {
				for (int i = 0; i < b_month_num - 1; i++) {
					days_left += days_in_month_leap[i];
				}
				days_left += b_day_num;
			}
			else {
				for (int i = 0; i < b_month_num - 1; i++) {
					days_left += days_in_month_reg[i];
				}
				days_left += b_day_num;
			}
		}
		//if the current leap is not leap
		else {
			days_left += days_in_month_reg[curr_month_num - 1] - curr_day_num;
			for (int i = curr_month_num; i < 12; i++) {
				days_left += days_in_month_reg[i];
			}
			//check if the next year is leap or not
			int check_next_year = number_of_year + 1;
			if (check_if_leap(check_next_year) == true) {
				for (int i = 0; i < b_month_num - 1; i++) {
					days_left += days_in_month_leap[i];
				}
				days_left += b_day_num;
			}
			else {
				for (int i = 0; i < b_month_num - 1; i++) {
					days_left += days_in_month_reg[i];
				}
				days_left += b_day_num;
			}
		}
	}
	return days_left;
}