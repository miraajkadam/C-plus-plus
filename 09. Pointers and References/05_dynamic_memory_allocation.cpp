/*

int *int_ptr {nullptr};
int_ptr = new int; // allocating memory in heap 

*/

#include <iostream>

using namespace std;

int main () {
	ios_base::sync_with_stdio (false);

	int *int_ptr {nullptr};
	int_ptr = new int;
	cout << int_ptr << endl;
	delete int_ptr;
	cout << int_ptr << endl;

	size_t size {0};
	double *temp_ptr {nullptr};
	cout << "how many temp?";
	cin >> size;
	temp_ptr = new double[size];
	cout << temp_ptr;

	// temp_ptr = nullptr; // This statement will cause a memory leak

	delete [] temp_ptr;

	while (true) {
		temp_ptr = new double [size];
	}

	return 0;	
}