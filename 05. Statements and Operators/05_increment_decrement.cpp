/*

increment  ++
decrement --

Prefix ++num
Postfix num--

*/

#include <iostream>

using namespace std;

int main () {
	ios_base::sync_with_stdio (false);

	int a = 1;
	cout << ++a + a++;
	a = 1;
	cout << a++ << " " << ++a;
	return 0;	
}

