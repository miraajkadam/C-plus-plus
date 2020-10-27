/*

for (initialization; condition; increament)
	statement;

for (initialization; condition; increament) {
	statement(s);
}

comma operator --> 
for (int i = 1, j = 5; i <= 5; ++i j++)
	cout << i * j << endl;

*/

#include <iostream>
#include <vector>

using namespace std;

int main () {
	ios_base::sync_with_stdio (false);

	for (int i = 0, j = 5; i < 5; i++, j++) {
		cout << i << " " << j << endl;
	}

	cout << endl;

	for (int i = 1; i <= 100; i++) {
		cout << i << ((i % 10 == 0)? "\n" : (i < 10)? "  " : " ");
	}

	cout << endl;

	vector <int> nums {10, 20, 30, 40, 50};

	for (unsigned i = 0; i < nums.size(); i++) { // if int in place of unsiged then the comparion is occuring between signed and unsigned numbers this depeding on the compiler it might give an warning.
		cout << nums[i] << " ";
	}

	return 0;	
}