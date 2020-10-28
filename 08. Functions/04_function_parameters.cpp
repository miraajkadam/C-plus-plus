/*

arguments <--

int area (int rad) <-- rad is parameter

Call by Value 
- Copy of data is passed to the function

Formal vs Actual 
- Formal - Parameters defined in function header
- Actual - Parameters defind in the function call

Function Return Statement - if the function type is Void then the return statement is optional, else it is required
- return statement immediately exits the code, no further code in the function is executed if the return statement occurs.

*/

#include <iostream>

using namespace std;

void pass_by_value (int num);

void pass_by_value (int num) {
	num = 1000;
	cout << num << endl;	
}

int main () {
	ios_base::sync_with_stdio (false);
	int num = 100;
	cout << "Number before: " << num;
	cout << " Number after: ";
	pass_by_value (num);
	cout << "Number still: " << num;

	return 0;	
}