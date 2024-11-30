#include <iostream>
using namespace std;
int defaultparam(int d1, int d2,int d3, int d4, int d5, int d6=20, int d7=10)
{
	return (d1 + d2 + d3 + d4 + d5 + d6 + d7) / 7;
}
void main()
{
	int first_check = defaultparam(1, 2, 3, 4, 5);
	int sec_check = defaultparam(1, 2, 3, 4, 5, 6, 7);
}