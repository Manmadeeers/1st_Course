#include "find_holyday.h"
#include "stdafx.h"

void find_holyday(int holyday)
{
	switch (holyday) {
	case 1: cout << "Это Новый год" << endl;
		break;
	case 152:cout << "Это Первый день лета" << endl;
		break;
	case 256:cout << "Это День программиста" << endl;
		break;
	case 365:cout << "Это Канун нового года" << endl;
		break;
	case 366:cout << "Это Канун нового года" << endl;
		break;
	default:cout << "В этот день нет праздника" << endl; break;
	}
}