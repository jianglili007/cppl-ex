// Exercise 4.3
#include <iostream>

int main()
{
	enum Beer { Carlsberg, Tuborg, Thor };

	using namespace std;

	cout << "char         : " << sizeof(char) << endl;
	cout << "short        : " << sizeof(short) << endl;
	cout << "int          : " << sizeof(int) << endl;
	cout << "long         : " << sizeof(long) << endl;
	cout << "float        : " << sizeof(float) << endl;
	cout << "double       : " << sizeof(double) << endl;
	cout << "long double  : " << sizeof(long double) << endl;
	cout << "char*        : " << sizeof(char*) << endl;
	cout << "short*       : " << sizeof(short*) << endl;
	cout << "int*         : " << sizeof(int*) << endl;
	cout << "long*        : " << sizeof(long*) << endl;
	cout << "float*       : " << sizeof(float*) << endl;
	cout << "double*      : " << sizeof(double*) << endl;
	cout << "long double* : " << sizeof(long double*) << endl;
	cout << "Beer (enum)  : " << sizeof(Beer) << endl;
}
