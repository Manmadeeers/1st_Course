#include <iostream>
#include "Call.h"
using namespace std;
using namespace call;

void main()
{
	int a=10, b=20, c=30;
	int ans1 = cdec(a, 2, c);
	int d=14, e=18, f=32;
	int ans2 = cstd(d, e, f);
	int g = 8, h = 5, i = 3, j = 1;
	int ans3 = csft(g, h, i, j);
}