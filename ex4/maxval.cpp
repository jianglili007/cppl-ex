// Exercise 4.5
#include <iostream>
#include <string>
#include <complex>
#include <cstdlib>

int main()
{
	using namespace std;

	cout << "\nmax sizes:" << endl;
	cout << "short       = " << char(0xff / 2) << endl;
	cout << "short       = " << short(0xffff + 2) << endl;
	cout << "int         = " << int(0xffffffff + 2) << endl;
	cout << "long        = " << long(0xffffffff + 2) << endl;
	cout << "float       = " << float(0xffffffff) << endl;
	cout << "double      = " << double(0xffffffffffffffff) << endl;
	cout << "long double = " << (long double)(0xffffffffffffffff) << endl;
	cout << "unsigned    = " << unsigned(0xffffffff) << endl;

	// This is wrong and I know it ...
	cout << "\nminimum sizes:" << endl;
	cout << "short       = " << char(-0xff) << endl;
	cout << "short       = " << short(-0xffff) << endl;
	cout << "int         = " << int(-0xffffffff) << endl;
	cout << "long        = " << long(-0xffffffff) << endl;
	cout << "float       = " << float(-0xffffffff) << endl;
	cout << "double      = " << double(-0xffffffffffffffff) << endl;
	cout << "long double = " << (long double)(-0xffffffffffffffff) << endl;
	cout << "unsigned    = " << unsigned(-0xffffffff) << endl;
}
