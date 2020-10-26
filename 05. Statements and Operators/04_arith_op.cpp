/*

+ addition
- Substraction
* multi
/ division
% modulo Only integers

*/

#include <iostream>

using namespace std;

int main () {
	ios_base::sync_with_stdio (false);

	int num1 {200};
	int num2 {100};

	cout << num1 + num2 << endl; 
	cout << num1 - num2 << endl;
	cout << num1 * num2 << endl;
	cout << num1 / num2 << endl;
	cout << num1 % num2 << endl;
	cout << (float) num2 / num1 << endl;
	cout << num1 + num2 * num1 << endl; // num2 x num1 + num1 (BODMASS)
	

	return 0;	
}