#include <iostream>

using namespace std;

int *mult (int *ar1, size_t size1, int *ar2, size_t size2) {
	int *starting {nullptr};
	starting = new int[size1 * size2];
	int snz = 0;
	for (int i = 0; i < size2; i++) {
		for (int j = 0; j < size1; j++) {
			*(starting + snz) = ar2[i] * ar1[j];
			snz++;
		}
	}

	return starting;
}

void print (int *start, size_t size) {
	for (int i = 0; i < size; i ++) {
		cout << *(start + i) << endl;
	}
}

int main () {
	ios_base::sync_with_stdio (false);

	int ar1[] {1, 2, 3, 4, 5}, ar2[] {10, 20, 30};
	int *add = mult (ar1, 5, ar2, 3);

	print (add, 15);

	delete [] add;
	return 0;	
}