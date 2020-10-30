/*

pass by reference by pointers

*/

#include <iostream>

using namespace std;

void swap (int *x, int *y) {
	int temp = *x;
	*x = *y;
	*y = temp;
}

int main () {
	ios_base::sync_with_stdio (false);

	int x = 100, y = 200;
	cout << x << " " << y << endl;
	swap (&x, &y);
	cout << x << " " << y << endl;

	return 0;
}