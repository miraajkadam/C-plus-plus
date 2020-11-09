/*

Stl algorithms work on sequences of container elements provided to them by and iterator

#include <algorithms>

*/

#include <iostream>
#include <vector>
#include <list>
#include <algorithm>
#include <cctype>
#include <iterator>

using namespace std;

int main () {
	ios_base::sync_with_stdio (false);

	vector<int> vec1 {10, 20, 30, 40, 50};
	auto itr1 = find(vec1.begin(), vec1.end(), 20);
	if (itr1 != vec1.end()) {
		cout << "Found" << endl;
		cout << distance(vec1.begin(), 20) << endl;
	}
	else {
		cout << "Not Found" << endl;
	}


	return 0;	
}