// Exercise 4.4
#include <iostream>
#include <string>

int main()
{
	// String of 71 chars. Ordered after value.
	string chars = "жеш!\"#$%&'()*+,-./0123456789:;<=>?@[\\]^_`"
		"abcdefghijklmnopqrstuvwxyz{|}~";

	using namespace std;

	for(int i = 0; i < 71; ++i) {
		// Can't figure out how to print an int as hex without
		// using stuff from page 600+, so this'll have to do for now.
		cout << chars[i] << " = " << int(chars[i]) << endl;
	}
}
