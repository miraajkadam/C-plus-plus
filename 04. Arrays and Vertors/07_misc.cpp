#include <iostream>
#include <vector>

using namespace std;

int main () {
	ios_base::sync_with_stdio (false);

	vector<int> vec1;
	vector<int> vec2;

	vec1.push_back (10);
	vec1.push_back (20);

	cout << vec1.at (0) << endl;
	cout << vec1.size () << endl;

	vec2.push_back (100);
	vec2.push_back (200);

	cout << vec2.at (1) << endl;
	cout << vec2.size () << endl;
	vector<vector<int>> twod;

	twod.push_back (vec1);
	twod.push_back (vec2);

	cout << twod [0][1] << endl;
	cout << twod.at(0).at(0) << endl;
	cout << twod [1][1] << endl;
	return 0;	
}