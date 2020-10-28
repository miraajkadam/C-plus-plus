/*

forward declarations
---------------------

useful when some functions calls some other functions and we don't need to worry about the sequencing of the definations

int function_name (int); // prototype
int main () {
	function_name ([something]); // calling
	return 0;
}
int function_name (int [something]) { // defination
	[logic]
	.
	.
	.
	return [something];
}

*/

#include <iostream>

using namespace std;

int area (int);

int main () {
	ios_base::sync_with_stdio (false);

	cout << area (5);

	return 0;	
}

int area (int rad) {
	return rad * rad * 3.14;
}