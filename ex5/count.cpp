// Taken from Bjarne Stroustrup "The C++ Programming Language, special ed."
// pp. 99-100.
#include <iostream>
#include <vector>
#include <string>
#include <cstdlib>

// Struct holding a name:val pair.
struct Pair {
	string name;
	double val;
};

// Vector of Pairs.
vector<Pair> pairs;

double& value(const string& s);

int main()
{
	string buf;

	while (cin >> buf)
		value(buf)++;

	for(vector<Pair>::const_iterator p = pairs.begin(); p != pairs.end(); ++p)
		std::cout << p->name << " :\t" << p->val << endl;

	return EXIT_SUCCESS;
}

// Maintain a set of Pairs.
// Search for s, return it's value if found, otherwise make a new Pair
// and return the default value 0.
double& value(const string& s)
{
	for(unsigned i = 0; i < pairs.size(); i++)
		if(s == pairs[i].name)
			return pairs[i].val;

	Pair p = { s, 0 };
	pairs.push_back(p); // Add Pair at end.

	return pairs[pairs.size() - 1].val;
}
