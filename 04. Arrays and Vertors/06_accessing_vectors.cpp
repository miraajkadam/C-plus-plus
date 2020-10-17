/*

acessing vectors
vector <int> marks {1, 2, 3, 4, 5};

marks [0] = 1;
marks.at (1) = 2;

*/

#include <iostream>
#include <vector>
using namespace std;

int main () {
	ios_base::sync_with_stdio (false);

	vector<int> marks {1, 3, 4, 2, 1};
	cout << marks.at (4) << endl;
	// cout << marks.at (6) << endl;


	// 2d vector
	vector<vector<int>> matrix {
		{1, 2, 3},
		{4, 5, 6},
		{7, 8, 9},
	};

	cout << matrix [1][1];
	return 0;	
}