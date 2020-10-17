/*

Element_Type array_name [dim1_size][dim2_size];

int movie_rating [3][4];

*/

#include <iostream>

using namespace std;

int main () {
	ios_base::sync_with_stdio (false);

	int ar [3][3] {
		{1, 2, 3},
		{4, 5, 6},
		{7, 8, 9},
	};
	// ar [1][1] = 3;
	cout << ar [1][1] << endl;
	cout << ar [1][0];

	return 0;	
}