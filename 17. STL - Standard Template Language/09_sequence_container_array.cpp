/*

std::array (C++ 11)
#include <array>

- Fixed Array
- Direct element access
- Provides access to the underlying raw array
- Use instead of raw arrays when possible
- All iterators available and do not invalidate

*/

#include <iostream>
#include <array>
#include <algorithm>
#include <numeric>

using namespace std;

void display(const array<int, 5> &ar) {
	for (const auto &i : ar) 
		cout << i << " ";
	cout << endl;
}

string breaker() {
	return "\n===========================================================\n\n";
}

int main () {
	ios_base::sync_with_stdio (false);

	{
		array<int, 5> ar1 {1, 2, 3, 4, 5};
		array<int, 5> ar2;

		display(ar1);
		display(ar2);

		cout << ar1.size() << endl;
		cout << ar2.size() << endl;

		ar1[0] = 1000;
		ar1.at(1) = 2000;

		display(ar1);
		display(ar2);

		ar2[1] = 999;
		cout << ar2[1] << endl;
		display(ar2);
	}	

	cout << breaker();

	{
		array<int, 5> ar1 {1, 2, 3, 4, 5};
		array<int, 5> ar2 {100, 200, 300, 400, 500};

		display(ar1);
		display(ar2);

		ar1.swap(ar2);

		display(ar1);
		display(ar2);	
	}

	cout << breaker();

	{
		array<int, 5> ar1 {{1, 2, 3, 4, 5}};

		int *ptr = ar1.data(); // address of first element
		cout << ar1.data() << endl;
		cout << &ptr << endl;
	}

	cout << breaker();

	{
		array<int, 5> ar {2, 3, 1, 4, 5};
		display(ar);
		sort(ar.begin(), ar.end());
		display(ar);
	}

	cout << breaker();

	{
		array<int, 5> ar {2, 3, 1, 4, 5};
		auto max = max_element(ar.begin(), ar.end());
		cout << *max << endl;

		auto min = min_element(ar.begin(), ar.end());
		cout << *min << endl;
	}

	cout << breaker();

	{
		array<int, 5> ar {1, 2, 3, 3, 4};
		auto adjacent = adjacent_find(ar.begin(), ar.end());
		if (adjacent != ar.end()) 
			cout << "adjacent element found with value: " << *adjacent << endl;
		else	
			cout << "No adjacent element"  << endl;
	}

	cout << breaker();

	{
		array<int, 5> ar {1, 2, 3, 1, 2};
		int sum = accumulate(ar.begin(), ar.end(), 0);
		cout << "sum = " << sum << endl;
	}

	cout << breaker();
	{
		array<int, 5> ar {10, 20, 30, 40, 50};
		int count = count_if(ar.begin(), ar.end(), [](int x){ return x >= 20 && x <= 40; });
		cout << count << endl;
	}

	return 0;	
}