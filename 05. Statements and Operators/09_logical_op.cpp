/*

not !
and &&
or ||

Short circuit evaluation <--
*/

#include <iostream>

using namespace std;

int main () {
	ios_base::sync_with_stdio (false);

	int lower = 10, upper = 20;
	cout << boolalpha;
	cout << (lower < upper || lower > upper) << endl;
	cout << (lower < upper && lower > upper) << endl;

	return 0;	
}