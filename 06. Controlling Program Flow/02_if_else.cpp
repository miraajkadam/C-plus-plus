/*

if (expr)
	statement1;
else if (expr)
	statement2;
else
	statement3;

*/

#include <iostream>

using namespace std;

int main () {
	ios_base::sync_with_stdio (false);

	const int target = 100;
	int num;
	cout << "Enter the number: ";
	cin >> num;
	if (num > target)
		cout << "Number is greater than target";
	else if (num < target)
		cout << "Number is less than the target";
	else
		cout << "Number is equal to target";

	return 0;	
}