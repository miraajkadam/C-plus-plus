/*

defaults is 0 or 1
can be displayed as true or false

Method version
cout.setf(ios::boolalpha);
cout.setf(ios::noboolalpha);

Reseting to default
cout << resetiosflags(ios::boolalpha);

*/

#include <iostream>
#include <iomanip>

using namespace std;

int main () {
	ios_base::sync_with_stdio (false);

	cout << (1 == 1) << endl; // 1
	cout << ('a' == 'b') << endl; // 0

	cout << boolalpha;

	cout << (1 == 1) << endl; // true
	cout << ('a' == 'b') << endl; // false

	cout << noboolalpha;

	cout << (1 == 1) << endl; // 1
	cout << ('a' == 'b') << endl; // 0

	cout.setf(ios::boolalpha);

	cout << (1 == 1) << endl; // true
	cout << ('a' == 'b') << endl; // false

	cout << resetiosflags(ios::boolalpha);

	cout << (1 == 1) << endl; // 1
	cout << ('a' == 'b') << endl; // 0

	return 0;	
}