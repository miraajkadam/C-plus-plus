/*

Unary operator

int *p;
cout << p; // 0x61ff60 - garbage
cout << &p; // 0x61ff18

p = nullptr;
cout << p; // 0

*/

#include <iostream>

using namespace std;

int main () {
	ios_base::sync_with_stdio (false);

	int *p;
	cout << p << endl;
	cout << &p << endl;
	p = nullptr;
	cout << &p << endl;
	cout << p << endl;

	return 0;	
}