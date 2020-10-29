/*

functions with different parameters with same name.
A type of polymorphism

int add_numbers (int, int); // 1
int add_numbers (double, double); // 2

int main () {
	cout << add_numbers (10, 20); // calls 1
	cout << add_numbers (10.0, 20.0) // calls 2
}

int add_numbers (int, int) {
	return a + b;
}
int add_numbers (double, double) {
	return a + b;
}

*/

#include <iostream>
#include <string>
#include <vector>

using namespace std;

void print (int a) {
	cout << a << endl;
}

void print (double a) {
	cout << a << endl;
}

void print (string a) {
	cout << a << endl;
}

void print (vector<int> a) {
	for (int i : a) 
		cout << i << " ";
	cout << endl;
}

int main () {
	ios_base::sync_with_stdio (false);

	print (10);
	print (10.25);
	print ("Miraaj");
	vector<int> a {1, 2, 3, 4, 5};
	print(a);

	return 0;	
}