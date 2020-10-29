/*

void print_array (int numbers []);

- The array elements are not NOT copied
- If array is passed to them functions the functions only gets the address to the first element in the array.
- Therefore the function does not know how many elements are there in the array and how many times to iterate to do some operation.

void print_array (const int numbers [], size_t size);

*/

#include <iostream>

using namespace std;

void print_array (const int my_scores [], size_t size) {
	for (int  i = 0; i < size; i++) 
		cout << my_scores[i] << " ";
	cout << endl;
}

void set_array (int my_scores [], size_t size, int num) {
	for (int i = 0; i < size; i++) 
		my_scores[i] = num;
}

int main () {
	ios_base::sync_with_stdio (false);

	int my_scores[] {100, 98, 97, 96, 95};

	print_array (my_scores, 5);
	set_array (my_scores, 5, 100);
	print_array (my_scores, 5);

	return 0;	
}