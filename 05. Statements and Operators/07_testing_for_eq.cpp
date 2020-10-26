/*

== Equal to
!= Not Equal to

evaluates to boolean (true/1 OR false/0)

*/

#include <iostream>

using namespace std;

int main () {
	ios_base::sync_with_stdio (false);

	cout << (100 == 200) << endl;
	cout << (100 == 100) << endl;

	cout << boolalpha << (100 == 100) << endl;
	cout << (100 == 200) << endl;
	cout << noboolalpha << (100 == 200) << endl;

	cout << boolalpha << true << endl;
	cout << noboolalpha << true << endl;
	
	return 0;	
}