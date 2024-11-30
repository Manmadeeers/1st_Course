#include <iostream>
using namespace std;
//function for task 21
int function(int x, int y) {
	return x * y;
}

void main()
{
	//constants
	const int n = 12;
	const int X = 9 + n;
	const int Y = 10 + n;
	const int Z = 11 + n;
	const float S = 1.0 + n;

	//task 4
	//1 byte
	bool first_bool = true;
	bool second_bool = false;
	//task 5
	//1 byte
	char surename_latter = 'i';
	//task 6
	char surename_latter_rus = 'и';
	//task 7
	//2 byte
	wchar_t latin = L'F';
	//task 8
	wchar_t cyrilic = L'Ф';
	//task 9
	//2 byte
	short pos_X = X;
	//hex for x:15
	short neg_X = -X;
	//hex for -x:FFDF
	
	//task 10
	short maximal = SHRT_MAX;
	//decimal max: 32767
	short minimal = SHRT_MIN;
	//decimal min: -32768

	//task 11
	//2 byte
	unsigned short max_unsigned = 65535;
	unsigned short min_unsigned = 0;

	//task 12
	//4 byte
	int pos_Y = Y;
	//hex for pos_Y: 16
	int neg_Y = -Y;
	//hex for neg_Y: FFEA

	//task 13
	int max_int = INT_MAX;
	//decimal: max_int	2147483647

	int min_int = INT_MIN;
	//decimal: -2147483648	

	//task 14
	//4 byte
	unsigned int max_uint = UINT_MAX;
	//decimal: 4 294 967 295
	unsigned int min_uint = 0;
	//decimal:0

	//task 15
	//4 byte
	long pos_Z = Z;
	//hex for Z: 17
	long neg_Z = -Z;
	//hex for -Z: FFE9
	 
	//task16
	long lng_max = LONG_MAX;
	//hex for long max 7FFF

	
	//task 17
	//4 byte
	unsigned long ulong_max = ULONG_MAX;
	//decimal: 4 294 967 295
	unsigned long ulong_min = 0;
	//decimal: 0

	 //task 18
	//4 byte
	float pos_S = S;
	//hex:D.000
	float neg_S = -S;
	//hex:FFF3.000

	//task 19
	//8 byte
	double for_inf = 10;
	double inf_pos = for_inf/ 0;
	cout << inf_pos << endl;

	double inf_neg = -for_inf / 0;
	cout << inf_neg << endl;

	double sqrt_neg = sqrt(-for_inf);
	cout << sqrt_neg << endl;


	//task 20
	char chr = 'a';
	//4 bytes
	char* ptr_chr = &chr;

	wchar_t wchr = L'F';
	wchar_t* ptr_wchr = &wchr;
	ptr_wchr = ptr_wchr + 3;

	short shrt = 20;
	short* ptr_shrt = &shrt;

	int intgr = 500;
	int* ptr_intgr = &intgr;

	float flt = 20.2;
	float* ptr_flt = &flt;

	double dbl = 20.2345;
	double* ptr_dbl = &dbl;

	//task 21
	int(*func_ptr)(int, int);
	func_ptr = function;
}