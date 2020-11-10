/*

#include <vector>
Dynamic size
- handled automatically
- can expand and contract as needed
- elements are stored in contigous memory as an array

Direct element access (constant time)
Rapid insertion and eletion at the back (constant time)
Insertion or removal of element (linear time)
All iterators available and may invalidate

*/
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void display(const vector<int> &ar) {
	for (const auto &i : ar)
		cout << i << " ";
	cout << endl;
}

void breaker() {
	cout << "\n=================================================\n\n";
}

int main () {
	ios_base::sync_with_stdio (false);
	{
		vector<int> vec {1, 2, 3, 4, 5};

		display(vec);
		cout << vec.size() << endl;
		cout << vec.capacity() << endl;
	}

	breaker();

	{
		vector<int> vec {1, 2, 3, 4, 5};		
		vec.push_back(6);
		display(vec);
		cout << vec.size() << endl;
		cout << vec.capacity() << endl;
	}

	breaker();

	{
		vector<int> vec {1, 2, 3, 4, 5};
		vec.push_back(6);
		vec.shrink_to_fit(); // make capacity = size
		display(vec);
		cout << vec.size() << endl;
		cout << vec.capacity() << endl;
	}

	breaker();

	{
		vector<int> vec {1, 2, 3, 4, 5};
		vec[1] = 100;
		vec.at(2) = 200;
		display(vec);
	}

	breaker();

	{
		vector<int> vec {1, 2, 3, 4, 5};
		vec.emplace_back(7);
		display(vec); // calls constructor automatically
	}

	breaker();

	{
		vector<int> vec {1, 2, 3, 4, 5};
		cout << vec.front() << endl;
		cout << vec.back() << endl;
	}

	breaker();

	{
		vector<int> vec {1, 2, 3, 4, 5};
		vec.clear();
		cout << "Vector now: ";
		display(vec);
	}

	breaker();

	{
		vector<int> vec {1, 2, 3, 4, 5};
		vec.clear();
		vec = {1, 2, 3, 4, 5, 5, 5, 6};
		display(vec);
		vec.erase(vec.begin(), vec.end());
		cout << "Vector now: ";
		display(vec);
	}

	breaker();

	{	
		vector<int> vec {1, 2, 3, 4, 5};		
		vec = {1, 2, 3, 4, 5, 5, 5, 6};
		display(vec);
		auto itr = find(vec.begin(), vec.end(), 0);
		if (itr != vec.end()) // lose pointer vec.end() if this check is not there
			vec.erase(itr);	
		display(vec);
	}

	breaker();

	{
		vector<int> vec1 {1, 2, 3, 4, 5};
		vector<int> vec2 {100, 200, 300, 400, 500};

		display(vec1);
		display(vec2);
		vec1.swap(vec2);
		display(vec1);
		display(vec2);
		breaker();
	}

	breaker();

	{
		vector<int> vec {2, 1, 3, 4 ,5};
		display(vec);
		sort(vec.begin(), vec.end());
		display(vec);
		reverse(vec.begin(), vec.end());
		display(vec);
	}

	breaker();

	{
		vector<int> v1 {1, 2, 3, 4, 5};
		vector<int> v2 {100, 200, 300};
		display(v1);
		display(v2);
		cout << endl;
		copy(v1.begin(), v1.end(), back_inserter(v2)); // insert v1 on the back of v2
		display(v1);
		display(v2);
	}

	breaker();

	{
		vector<int> v1 {1, 2, 3, 4, 5};
		vector<int> v2 {100, 200, 300};
		display(v1);
		display(v2);
		cout << endl;
		copy_if(v1.begin(), v1.end(), back_inserter(v2), [](int x){ return x % 2 == 0; }); // insert v1 on the back of v2 is it is multiple of 2
		display(v1);
		display(v2);
	}

	breaker();

	{
		vector<int> v1 {1, 2, 3, 4, 5};
		vector<int> v2 {100, 200, 300, 400, 500};
		vector<int> v3;

		transform(v1.begin(), v1.end(), v2.begin(), back_inserter(v3), [] (int x, int y) { return x * y; });
		display(v3);
	}

	breaker();

	{
		vector<int> v1 {1, 2, 3, 4, 5};
		vector<int> v2 {100, 200, 300};

		display(v1);
		display(v2);

		auto it = find(v1.begin(), v1.end(), 5);
		if (it != v1.end()) {
			v1.insert(it, v2.begin(), v2.end());
		}

		display(v1);
		display(v2);
	}

	return 0;	
}