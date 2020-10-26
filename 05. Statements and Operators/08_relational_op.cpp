/*

> greater than
>= greater than eq
< less than
<= less than eq
<=> Three way comparison (C++ 20)

*/

#include <iostream>

using namespace std;

int main () {
	ios_base::sync_with_stdio (false);

	int num1 = 10, num2 = 10, num3 = 20;

	cout << boolalpha;

	cout << (num1 >= num2) << endl;
	cout << (num3 <= num1) << endl;
	cout << (num1 > num2) << endl;

	return 0;	
}