#include "varparam.h"
 namespace Varparam {
	 int ivarparam(int amount, ...) {
		 int* pointer = &amount+1;
		 int multiplication = 1;
		 for (int i = 0; i < amount; i++) {
			 multiplication *= *(pointer + i);
		 }
		 return multiplication;
	 }
	 short svarparam(short amount, ...) {
		 int* pointer = (int*)(& amount);
		 short max = amount;
		 for (int i = 1; i < amount; i++) {
			 if (*(pointer + i) > max) {
				 max = *(pointer + i);
			 }
		 }
		 return max;
	 }
	 double fvarparam(float first, ...) {
		 double* pointer = (double*)(& first);
		 double sum = 0;
		 int i = 0;
		 while (*(pointer + i) != FLT_MAX) {
			 sum += *(pointer + i);
			 i++;
		 }
		 return sum;
	 }
	 double dvarparam(double first, ...) {
		 double* pointer = &first;
		 double sum = 0;
		 int i = 0;
		 while (*(pointer + i) != DBL_MAX) {
			 sum += *(pointer + i);
			 i++;
		 }
		 return sum;
	 }
}

