// Exercise 7
#include <iostream>
#include <string>
#include <cstdlib>

int main()
{
	using namespace std;

	char months[] = {"JFMAMJJASOND"}; // First letter of month names.
	int days[] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

	// Define struct of month name and # of days.
	struct md {
		string mon;
		int days;
	};

	// Make array of 'md' structs and initialize.
	md year[] = {{"Jan", 31}, {"Feb", 29}, {"Mar", 31}, {"Apr", 30},
				 {"May", 31}, {"Jun", 30}, {"Jul", 31}, {"Aug", 31},
				 {"Sep", 30}, {"Okt", 31}, {"Nov", 30}, {"Dec", 31}};

	// Print tables.
	cout << "Two arrays\tArray of structs" << endl;
	for(int i = 0; i < 12; ++i) {
		cout << months[i] << ": " << days[i] << "\t\t";
		cout << year[i].mon << ": " << year[i].days << endl;
	}

	return EXIT_SUCCESS;
}
