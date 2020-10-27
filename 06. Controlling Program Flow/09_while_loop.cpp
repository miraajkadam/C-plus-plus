/*

while (expression)
	statement;

while (expression) {
	statement;
}

*/

#include <iostream>

using namespace std;

int main () {
	ios_base::sync_with_stdio (false);

	int num = 3;
	while (num > 0) {
		cout << num << endl;
		num--;
	}
	cout << endl;

	num = 3;
	while (num) {
		cout << num-- << endl;
	}
	cout << endl;

	num = 3;
	while (num--) {
		cout << num + 1<< endl;
	}
	cout << endl;

	bool done = false;
	while (!done) {
		int num;
		cout << "Enter an integer: ";
		cin >> num;

		// (num >= 5 || num <= 1)? (cout << "Out of range... Try again") : (cout << "Nice...!", done = true); // doesnt work :c

		if (num >= 5 || num <= 1)
			cout << "Out of range try again";
		else {
			cout << "Nice..!";
			done = true;
		}
		
	}
	
	return 0;	
}