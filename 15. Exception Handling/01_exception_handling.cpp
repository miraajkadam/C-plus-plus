/*

- dealing with extraordinary situations
- Used only with synchrounous code.

What causes exceptions?
- insufficient resources
- missing resources
- invalid operations
- range violations
- underflows and overflows
- illegal data

Exception - an object or primitive type that signals that an error has occured

Throwing and exception (raising an exception)
Catching an exception (handle the exception)

throw 
- throw an exception
- followed by an argument

try {code that may throw an exception}
- if code throws an exception then try block is exited
- thrown exception is handled by catch block
- if there is no catch block then the program terminates

catch (exception ex) {code to handle the exception}
- code that handlges the exception
- can have multiple catch handlers
- may or may not cause the program to terminate

Dividing by zero
double average {};
try {
	if (total == 0)
		throw 0;
	average = sum / total;
}
catch (int &ex) {
	cerr << "can't divide by zero" << endl;
}
cout << "Program continues" << endl;

*/

#include <iostream>

using namespace std;

int main () {
	ios_base::sync_with_stdio (false);

	int km {}, litre {};
	double mileage {};

	cout << "Enter the km: ";
	cin >> km;
	cout << "Enter the litre: ";
	cin >> litre;

	// default way -->
	// if (litre != 0) {
	// 	mileage =  km / litre ;
	// 	cout << mileage << endl;
	// } 
	// else {
	// 	cerr << "Sorry, can't divide by zero" << endl;
	// }

	try {
		if (litre == 0)
			throw 0;
		mileage = km / litre;
		cout << mileage << endl;
	}
	catch (int &ex) {
		cerr << "Sorry, can't divide by zero" << endl;
	}

	return 0;	
}

