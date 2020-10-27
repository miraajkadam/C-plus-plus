/*

(cond_expr) ? expr1 : expr2;

- evaluates to a boolean
- if true returns expr1
- if false returns expr2

Ternary operator <--

*/

#include <iostream>

using namespace std;

int main () {
	ios_base::sync_with_stdio (false);

	int n {};

	// cout << "Enter an integer: ";
	// cin >> n;

	// if (n % 2 == 0)
	// 	cout << "even" << endl;
	// else
	// 	cout << "odd" << endl;

	// (n % 2 == 0)? cout << "even" << endl: cout << "odd" << endl; // method 1

	// cout << ((n % 2 == 0)? "even" : "odd") << endl; // method 2
	
	// =========================================================================================================

	int a, b;

	cout << "Enter two numbers: ";
	cin >> a >> b;

	/*
	
	if (a != b)
		check who is greater and print 
	else
		both are same
	*/

	(a != b)? (a > b)? cout << "a is greater" : cout << "b is greater" : cout << "both are same" ; cout << endl;

	cout << ((a != b)? (a > b)? "a is greater" : "b is greater" : "both are same") << endl;

	return 0;	
}