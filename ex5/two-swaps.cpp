// Exercise 4
#include <iostream>
#include <cstdlib>

// Pointer swap.
void pswap(int*, int*);

// Reference swap.
void rswap(int&, int&);

int main()
{
	// Initialize ints.
	int one = 1;
	int two = 2;

	std::cout << "one = " << one << "\ntwo = " << two << "\npswap()\n";

	// Make pointers to ints.
	int* x = &one;
	int* y = &two;
	// Call pswap with the above pointers as arguments. 
	pswap(x, y);
	std::cout << "one = " << one << "\ntwo = " << two << "\nrswap()\n";

	// Call rswap with ints as arguments.
	rswap(one, two);
	std::cout << "one = " << one << "\ntwo = " << two << "\n";

	// Whee ...
	return EXIT_SUCCESS;
}

// Implementation of pswap().
void pswap(int* a, int* b)
{
	// Assign *a to a temp var.
	int tmp = *a;
	*a = *b; // *a is *b.
	*b = tmp; // *b is tmp.
	// Swap done.
}

// Implementation of rswap().
void rswap(int &a, int &b)
{
	// Make pointers to &a and &b.
	int* x = &a;
	int* y = &b;

	// Assign *x to a temp var.
	int tmp = *x;
	*x = *y; // *x is *y.
	*y = tmp; // *y is tmp.
	// Swap done.
}
