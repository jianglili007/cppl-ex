// Exercise 4.2 (obviously can't compile)

// char ch;
char ch = 'k';
// string s;
string s = "Some string";
// int count = 1;
int count;
// const double pi = 3.1415926535897932385;
const double pi;
// extern int error_number;
int error_number = 32; // Cannot define an extern locally.

// const char* name = "Njal";
const char* name;
// const char* season[] = {"Spring", "Summer", "Fall", "Winter"};
const char* season[4];

// struct Date {int d, m, y};
struct Date;
// int day (Date* p) { return p->d; }
int day (Date* p);
// double sqrt(double);
double sqrt(double) { return 2.1; }
// template<class T> T abs(T a) { return a<0 ? -a : a; }
template<class T> T abs(T a);

// typedef complex<short> Point;
typedef complex<short> Point; // Uhm ... a typedef can't be a declaration
							 // only, it has to be a definition also to
							 // be valid syntax, right?
// struct User;
struct User { string Name; string Passwd; };
// enum Beer { Carlsberg, Tuborg, Thor };
enum Beer;
// namespace NS { int a; }
//namespace NS;
