/*

array_name [element_index];

int test_scores [5] {100, 23, 12, 31, 9};

*/

#include <iostream>

using namespace std;

int main () {
	ios_base :: sync_with_stdio (false);

	int test_scores[5] {100, 92, 12, 32, 3};

	cout << test_scores[1] << endl;

	test_scores [1] = 199.8;
	cout << test_scores[1] << endl;

	return 0;	
}