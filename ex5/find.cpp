// Exercise 12
#include <iostream>
#include <string>

using namespace std;

int sfind(const string& s); // Find 'ab' in a C++ string.

int afind(char a[]); // Find 'ab' in a C-style char array.

int main()
{
	const string str = "xabaacbaxabb"; // C++ string.
	char ca[] = "xabaacbaxabb"; // C-style string.

	std::cout << "sfind: Found " << sfind(str) << " occurrences of 'ab'.\n";
	std::cout << "afind: Found " << afind(ca) << " occurrences of 'ab'.\n";
}

int sfind(const string& s)
{
	// According to Stroustrup p. 595 this should find all occurrences
	// in the string (2), but it only finds one! In a test program from
	// the book it works exactly as advertised, so I'm out of luck here.
	return s.find("ab");
}

int afind(char a[])
{
	int occ = 0;
	int i = 0;

	// Some good old fashioned programming.
	do {
		if(a[i] == 'a' && a[i + 1] == 'b')
			occ++;
		i++;
	} while(a[i] != '\0');

	return occ;
}
