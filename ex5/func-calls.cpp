// Exercise 6
#include <iostream>

void f(char x)
{
	std::cout << x << '\n';
}

void g(char& x)
{
	std::cout << x << '\n';
}

void h(const char& x)
{
	std::cout << x << '\n';
}

int main()
{
	char c = 'S';
	unsigned char uc = 'T';
	signed char sc = 'U';

	std::cout << "f('a')   "; f('a'); 
	std::cout << "f(49)    "; f(49);
	std::cout << "f(3300)  "; f(3300);
	std::cout << "f(c)     "; f(c);
	std::cout << "f(uc)    "; f(uc);
	std::cout << "f(sc)    "; f(sc);

	//std::cout << "g('a')   "; g('a');  // Illegal.
	//std::cout << "g(49)    "; g(49);   // Illegal.
	//std::cout << "g(3300)  "; g(3300); // Illegal.
	std::cout << "g(c)     "; g(c);
	//std::cout << "g(uc)    "; g(uc);   // Illegal.
	//std::cout << "g(sc)    "; g(sc);   // Illegal.

	std::cout << "h('a')   "; h('a'); 
	std::cout << "h(49)    "; h(49);
	std::cout << "h(3300)  "; h(3300);
	std::cout << "h(c)     "; h(c);
	std::cout << "h(uc)    "; h(uc);
	std::cout << "h(sc)    "; h(sc);

	return 0;
}
