/*

int score {100};
int *score_ptr {&score};

cout << *score_ptr << endl; // 100
*score_ptr = 200;
cout << *score_ptr << endl; // 200
cout << score << endl; // 200

*/

#include <iostream>

using namespace std;

int main () {
	ios_base::sync_with_stdio (false);

	int score {100};
	int *score_ptr {&score};

	cout << *score_ptr << endl;
	*score_ptr = 200;
	cout << *score_ptr << endl;
	cout << score << endl;	

	return 0;	
}