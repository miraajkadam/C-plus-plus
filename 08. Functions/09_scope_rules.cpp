/*

- when and where the identifier can be used
- C++ uses static or lexical scoping
- local or block scope
- Global scope

static variables - lifetime is lifetime of the program

preference is towards local variable over global variable

*/

#include <iostream>

using namespace std;

int num = 300; // global variable

void print () {
	cout << num << endl;
	num = 600; // changing the global variable
	cout << num << endl;
}

void static_ex () {
	static int num = 3000; // this num won't the initialized by the compiler for the second time if it sees the num with 4000 static value already existing
	cout << num << endl;
	num += 1000;
	cout << num << endl;
}

int main () {
	ios_base::sync_with_stdio (false);

	int num1 {100}, num2 {200};
	cout << "local num is " << num1 << endl;
	{
		{
			int num1 {200};
			cout << "local num is " << num1<< endl;
			cout << "num2 is " << num2 << endl;
		}
	}

	print ();

	static_ex ();
	static_ex (); // retains previous num value

	return 0;	
}