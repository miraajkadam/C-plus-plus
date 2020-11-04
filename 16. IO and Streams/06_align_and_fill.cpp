/*

setw - immediate next member only (defaults justify is right)
setfill

*/

#include <iostream>
#include <iomanip>

using namespace std;

int main () {
	ios_base::sync_with_stdio (false);

	cout << setw(10) << "Hello" << endl;
	cout << "Hello" << endl;
	cout << right << setw(20) << "Hello" << endl;
	cout << left << setw(2) << "Hello" << endl;

	cout << right << setw(30) << setfill('-') << "Hello";
	cout << left << setw(30) << setfill('-') << "Hello";

	return 0;	
}