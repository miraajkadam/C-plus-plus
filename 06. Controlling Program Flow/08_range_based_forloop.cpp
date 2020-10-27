/*

for (var_type var_name : sequence)
	statement; 
for (var_type var_name : sequence) {
	statement; 
}

*/

#include <iostream>
#include <vector>

using namespace std;

int main () {
	ios_base::sync_with_stdio (false);

	int scores [] {100, 90, 80};
	for (int score : scores)
		cout << score << " ";
	cout << endl;

	vector <int> sc {100, 90, 80};
	for (int i : sc)
		cout << i << " ";
	cout << endl;

	for (char c : "Miraaj")
		cout << c << " ";
	cout << endl;

	for (auto c : "Kadam")
		cout << c << " ";
	cout << endl;


	return 0;	
}