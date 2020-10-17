/*
Have Names
occupy storage
are types

BIG DIFFERENCE ?
- Values cannot change

const age = 21;

age = 22; // Compiler error

Literal const --> normal one

declared const
--> const keyword

Constant expressions
--> constexpr keyword

Enumerated constants
--> enum keyword

defined constants
--> #define
*/

#include <iostream>

using namespace std;

#define pii 3.1415926

int main () {
	ios_base::sync_with_stdio (false);

	const double pi {3.1415926};
	cout << pi << endl;
	cout << pii << endl;
	cout << typeof(30);

	return 0;	
}