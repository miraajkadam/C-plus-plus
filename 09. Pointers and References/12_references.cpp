/*

alias for variable
must be initialized to a variable when decalred
cannot be null
once initialized cannot be made to refer to a different variable
very useful as function paramenters

*/

#include <iostream>
#include <vector>

using namespace std;

int main () {
	ios_base::sync_with_stdio (false);

	vector<int> v {1, 2, 3};
	// for (int i : v)  // change to data in vector not happning7
	// 	i = 5;

	// for (int i = 0; i < v.size(); i++) // change to data in vector happning
	// 	v[i] = 5;

	for (int &i : v)  // change to data in vector happning
		i = 5;

	for (int i : v)
		cout << i << " ";

	string st = "Miraaj";

	// for (char i : st) // won't work
	// 	i = 'S';

	for (char &i : st)
		i = 'S';

	for (char i : st)
		cout << i << " ";

	return 0;	
}