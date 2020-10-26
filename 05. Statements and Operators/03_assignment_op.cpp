#include <iostream>

using namespace std;

int main () {
	ios_base::sync_with_stdio (false);

	int num1 {10};
	int num2 {20};

	cout << num1 << endl;
	cout << num2 << endl;

	num1 = num2 = 100; // assignment right ----> left associativity

	cout << num1 << endl;
	cout << num2 << endl;

	return 0;	
}