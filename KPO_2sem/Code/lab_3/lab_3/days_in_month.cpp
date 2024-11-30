#include "stdafx.h"
#include "days_in_month.h"

int days_in_month(int month, int year)//function to determine the ammount of days in a certain month
{
    if (month == 2) {
        return check_if_leap(year) ? 29 : 28;
    }
    else if (month == 4 || month == 6 || month == 9 || month == 11) {
        return 30;
    }
    else {
        return 31;
    }
}