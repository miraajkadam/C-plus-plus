/*
determines the size in bytes of a type or variable

sizeof (int);
sizeof (double);
sizeof (some_variable);
sizeof some_variable;

<climits> and <cfloat> ???? includes size and precision info
*/

#include <iostream>
#include <climits> 
#include <cfloat> 

using namespace std;

int main () {
	ios_base::sync_with_stdio (false);

	cout << "Char " << sizeof (char) << endl;
	cout << "int " << sizeof (int) << endl;
	cout << "Unsigned int" << sizeof (unsigned int) << endl;

	cout << sizeof (float) << endl;
	cout << sizeof (double) << endl;
	cout << sizeof (long double) << endl;
	cout << sizeof (long long int) << endl;


	// minimum values
	cout << INT_MIN << endl;
	cout << CHAR_MIN << endl;
	cout << SHRT_MIN << endl;


	cout << INT_MAX << endl;
	cout << CHAR_MAX << endl;
	cout << SHRT_MAX << endl;

	int age {21};
	cout << sizeof (age) << endl;

	char a = 'a';
	cout << sizeof (a);
	return 0;	
}