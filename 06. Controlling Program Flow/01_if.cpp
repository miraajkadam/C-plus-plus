/*

if (expr) {
	statement;
}

expr --> true / false

block statement { <--
	...;
} <--


*/

#include <iostream>

using namespace std;

int main () {
	ios_base::sync_with_stdio (false);

	int num = 0;
	const int min = 10, max = 100;

	cout << "Enter a number: ";
	cin >> num;

	if (num > min) {
		cout << "Number is greater than 10";
	}

	if (num < max) {
		cout << "Number is lesser than 100";
	}

	return 0;	
}