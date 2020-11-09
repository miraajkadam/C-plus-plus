/*

allows abstracting an arbitrary containers as a sequence of elements
they are objects that work like pointers by design
most container classes can be traversed with iterators

vector<int>::iterator it1;
list<string>::iterator it2;
map<string, int>::iterator it3;
set<char>::iterator it4;

vector<int>::iterator it = vec.begin()
or
auto it = vec.begin();

vector<int>::reverse_iterator it <-- start from behind

*/

#include <iostream>
#include <vector>
#include <map>
#include <list>
#include <set>

using namespace std;

int main () {
	ios_base::sync_with_stdio (false);

	vector<int> ar1 {10, 20, 30};
	vector<int>::iterator itr1 = ar1.begin();
	// auto itr1 = ar1.begin(); // same as above

	vector<int>::reverse_iterator itr2 = ar1.rbegin();

	while (itr1 != ar1.end()) {
		cout << *itr1 << " ";
		itr1++;
	}

	cout << endl;

	while(itr2 != ar1.rend()) {
		cout << *itr2 << " ";
		itr2++;
	}

	cout << endl;

	auto itr3 = ar1.rbegin();
	while (itr3 != ar1.rend()) {
		cout << *itr3 << " ";
		itr3++;
	}

	return 0;	
}