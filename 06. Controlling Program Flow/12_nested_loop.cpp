/*

for (...;...;...) {
	for (...;...;...) {
		...
	}
}

vector<vector<int>> vector_2d {
	{1, 2, 3},
	{10, 20, 30, 40},
	{100, 200, 300, 400},
};

for (auto vec : vec : vector_2d) {
	for (auto val : vec) {
		cout << val << " ";
	} cout << endl;
}

*/

#include <iostream>

using namespace std;

int main () {
	ios_base::sync_with_stdio (false);

	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			cout << i << j << "  ";
		} cout << endl << "------------------" << endl;
	}

	return 0;	
}