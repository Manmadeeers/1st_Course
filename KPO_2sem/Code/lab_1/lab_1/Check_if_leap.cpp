#include "stdafx.h"
#include "Check_date.h"


bool check_if_leap(int year)
{
	return ((year % 4 == 0 && year % 100 != 0) || (year % 100 == 0 && year % 400 == 0));
}