/*

if an exception is thrown but not caught in the current scope C++ tries to find a handler for the exception by unwinding the stack
- Function in whcih the exception was not caught terminates and is removed from the call stack
- if a try block was used to then catch blocks are checks for a match
- if no try block was used or the catch handler doesn't match stack unwinding occurs again.
- if the stack is unwound back to main and no catch handler handles the exception the program terminates

*/

#include <iostream>

using namespace std;

void c () {
	cout << "starting c" << endl;
	throw 0;
	cout << "ending c" << endl;
}

void b () {	
	cout << "starting b" << endl;
	try {
		c();
	}
	catch(int &e) {
		cerr << "caught in b" << endl;
	}
	cout << "ending b" << endl;
}

void a () {
	cout << "starting a" << endl;
	try {
		b();
	}
	catch(int &e) {
		cerr << "caught in a" << endl;
	}

	cout << "ending a" << endl;
}

int main () {
	ios_base::sync_with_stdio (false);
	cout << "starting main" << endl;
	try {	
		a ();
	}

	catch (int &e) {
		cerr << "caught in main" << endl;
	}

	cout << "starting main" << endl;
	return 0;	
}