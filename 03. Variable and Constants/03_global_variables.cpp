/*
Global and local variables
*/

#include <iostream>

using namespace std;

int age {10}; // global declaration

int main () {
	ios_base::sync_with_stdio (false);

	int age {18}; // local declaration // 
	cout << age; // this will print local one - 18

	return 0;	
}