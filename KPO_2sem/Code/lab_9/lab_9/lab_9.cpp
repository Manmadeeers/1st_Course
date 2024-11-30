#include <iostream>
#include "varparam.h"
using namespace std;
using namespace Varparam;

void main()
{
	int ivpr1 = ivarparam(1);
	int ivpr2 = ivarparam(1, 2);
	int ivpr3 = ivarparam(1, 2, 3);
	int ivpr4 = ivarparam(1, 2, 3, 4, 5, 6, 7);

	short svpr1 = svarparam(1);
	short svpr2 = svarparam(1, 2);
	short svpr3 = svarparam(1, 2, 3);
	short svpr4 = svarparam(1, 2, 3, 4, 5, 6, 7);

	double fvpr1 = fvarparam(1.1);
	double fvpr2 = fvarparam(1.1, FLT_MAX);
	double fvpr3 = fvarparam(1.1, 2.2, FLT_MAX);
	double fvpr4 = fvarparam(1.1, 2.2, 3.3, 4.4, 5.5, 6.6, FLT_MAX);

	double dvpr1 = dvarparam(1.11);
	double dvpr2 = dvarparam(1.11, DBL_MAX);
	double dvpr3 = dvarparam(1.11, 2.22, DBL_MAX);
	double dvpr4 = dvarparam(1.11, 2.22, 3.33, 4.44, 5.55, 6.66, DBL_MAX);
}