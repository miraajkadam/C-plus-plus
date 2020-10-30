/*

The value of array name is the address of the first element in the array.
The value of a pointer variable is an address.
Therefore the pointer variable is equal to address of the first element in the array.

int scores[] {100, 98, 99};

cout << scores; // 0x61fec8
cout << *scores; // 100

int *score_ptr {scores};
cout << score_ptr; // 0x61fec8
cout << *score_ptr; // 100

*/

#include <iostream>

using namespace std;

int main () {
	ios_base::sync_with_stdio (false);

	int scores[] {100, 200, 300};

	cout << *scores << endl; // 100
	cout << *scores + 1 << endl; // 101
	cout << *scores << endl; // 100
	cout << *(scores + 1) << endl; // 200

	int *score_ptr {scores};

	cout << scores[0] << endl; // 100
	cout << *score_ptr << endl; // 100
	cout << scores[1] << endl; // 200
	cout << *(score_ptr + 1) << endl; // 200
	cout << *(score_ptr + 2) << endl; // 300

	cout << *scores + 2 << endl; // 102

	return 0;	
}