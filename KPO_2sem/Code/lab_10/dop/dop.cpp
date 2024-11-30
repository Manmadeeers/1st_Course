#include <iostream>
using namespace std;

void main()
{
	auto check_number = [](auto number) {
		return number > 0;
	};
	auto number1 = check_number(-100);
	cout << number1 << endl;
	auto number2 = check_number(100);
	cout << number2 << endl;
	auto number3 = check_number(0);
	cout << number3 << endl;
	auto number4 = check_number(25.164);
	cout << number4 << endl;
	auto number5 = check_number('А');
	cout << number5 << endl;
}