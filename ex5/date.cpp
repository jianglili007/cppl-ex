#include <iostream>
#include <cstdlib>

// The Date structure.
struct Date {
	int Year;
	int Month;
	int Day;
};

// Initialize a date object.
Date makeDate()
{
	Date result = {2002, 06, 07};

	return result;
}

// Get the values of a Date object.
void getDate(const Date& x)
{
	std::cout << x.Year << "-" << x.Month << "-" << x.Day << '\n';
}

// Set the values of a Date object.
void setDate(Date& x)
{
	std::cout << "Year  : ";
	std::cin >> x.Year;

	std::cout << "Month : ";
	std::cin >> x.Month;

	std::cout << "Day   : ";
	std::cin >> x.Day;
}

int main()
{
	Date today = makeDate(); // Initialize a Date object.

	getDate(today); // And write it out.

	setDate(today); // Set it to another value.

	getDate(today); // See that setDate() works.

	return EXIT_SUCCESS;
}
