/*

reference parameters create a alias

void scale_number (int &num);

int main () {
	int number {1000};
	scale_number (number);
	cout << number << endl
	return 0;
}

void scale_number (int &num) {
	if (num > 100)
		num = 100;
}

*/

#include <iostream>
#include <vector>

using namespace std;

void swap (int &a, int &b) { // changing the actual values of a and b
	int t = a;
	a = b;
	b = t;
}

void print_vector (const vector<int> &ar) { // const to prevent the function from changing any actual vector values as we are not creating a copy
	for (auto i : ar) 
		cout << i << " ";
	cout << endl;
}

int main () {
	ios_base::sync_with_stdio (false);
	
	int a = 10, b = 20;
	cout << "Before swapping " << a << " " << b << endl;
	swap (a, b);
	cout << "After Swapping " << a << " " << b << endl;	
	vector<int> ar {1, 2, 3, 4, 5,};
	print_vector (ar);

	return 0;	
}