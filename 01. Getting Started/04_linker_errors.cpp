/*
Linker having trouble linking all object file togethor to execute the program.
*/

#include <iostream>

extern int x;

using namespace std;

int main () {
	ios_base::sync_with_stdio (false);

	cout << x; // undefined reference to 'x'	

	return 0;	
}