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
	{
		vector<int> vec1 {10, 20, 30, 40, 50};
		auto itr1 = find(vec1.begin(), vec1.end(), 20);
		if (itr1 != vec1.end()) {
			cout << "Found" << endl;
			cout << distance(vec1.begin(), itr1) << endl;
		}
		else {
			cout << "Not Found" << endl;
		}
	}

	{
		vector<int> c {1, 2, 3, 1, 2, 1, 1, 3};
		int count = std::count(c.begin(), c.end(), 1);
		cout << count << endl;
	}

	{
		vector<int> vec {1, 2, 3, 4, 5, 1, 2, 3, 1, 100, 50, 69};
		int num = std::count_if(vec.begin(), vec.end(), [](int x) {return x % 2 == 0; });
		cout << num << endl;
		num = std::count_if(vec.begin(), vec.end(), [] (int x) { return x >= 10; });
		cout << num;	
	}

	{
		vector<int> vec {1, 2, 3, 1, 2, 1, 1};
		for (auto i : vec) 
			cout << i << " ";
		
		cout << endl;
		replace(vec.begin(), vec.end(), 1, 69);
		for (auto i : vec) 
			cout << i << " ";
		cout << endl;
	}

	{
		vector<int> vec {1, 2, 2, 1, 2, 3, 2, 1, 5};
		if (all_of(vec.begin(), vec.end(), [](int x) {return x > 3;}))
			cout << "All greater than 3" << endl;
		else 
			cout << "Not all elements are greater than 3" << endl;
	}

	{
		string str = "This is a Test";
		cout << "Before transformation: " << str << endl;
		transform(str.begin(), str.end(), str.begin(), :: toupper);
		cout << "After transformation: " << str << endl;
	}

	return 0;	
}