// Exercise 10
#include <iostream>
#include <string>

void print(string names[])
{
	for(int i = 0; i < 12; ++i)
		std::cout << names[i] << '\n';
}

int main()
{
	// Array of month names.
	string months[] = {"January", "February", "March",
		"April", "May", "June", "July", "August", "September",
		"October", "November", "December"};
	
	// Just curious. Says 48, because a string is just a reference.
	std::cout << "sizeof(months) is " << sizeof(months) << ".\n\n";

	// Print'em out.
	for(int i = 0; i < 12; ++i)
		std::cout << months[i] << '\n';
	std::cout << '\n';

	print(months);
}
