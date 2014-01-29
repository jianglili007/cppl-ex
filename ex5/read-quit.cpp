// Exercise 11
// Solution *very* much inspired by the examples in section 5.5.
// This version print out the words in the order they were entered,
// I haven't really figured out a (smart) way to sort them, yet.
// There must be something in the standard library for sorting.
#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>

using namespace std;

// Struct holding a word:count pair.
struct acct {
	string word;
	int count;
};

// Vector of accts.
vector<acct> pairs;

int& value(const string& s);

int main()
{
	string input;

	do {
		(std::cin >> input);
		if(input != "Quit") // Don't count the "Quit".
			value(input)++;
	} while(input != "Quit");

	for(vector<acct>::const_iterator p = pairs.begin(); p != pairs.end(); ++p)
		std::cout << p->word << " :\t" << p->count << endl;

	return EXIT_SUCCESS;
}

// Maintain a set of accts. Search for s, return it's value if found,
// otherwise make a new acct and return the default value 0.
int& value(const string& s)
{
	for(unsigned i = 0; i < pairs.size(); i++)
		if(s == pairs[i].word)
			return pairs[i].count;

	acct p = { s, 0 };
	pairs.push_back(p); // Add acct at end.

	return pairs[pairs.size() - 1].count;
}
