/*

deque (double ended queue)
#include <deque>

Dynamic size
- Handled automatically
- Can expand and contract as needed
- elements are NOT stored in contiguos memory

Direct element access (Constant time)
Rapid insertions and deletion at front and back (Constant time)
Insertion and removal of elements (linear time)
All iterators available and may invalidate

*/

#include <iostream>
#include <deque>
#include <vector>

using namespace std;

template<typename T>
void display(const deque<T> d) {
	for (auto i : d) 
		cout << i << " ";
	cout << endl;
}

template<typename T>
void display(const vector<T> d) {
	for (auto i : d) 
		cout << i << " ";
	cout << endl;
}

void breaker() {
	cout << "\n=============================================\n\n";
}

int main () {
	ios_base::sync_with_stdio (false);

	{
		deque<int> d {1, 2, 3, 4, 5};
		display(d);
		deque<int> d2 (10, 100);
		display(d2);

		cout << d[0];
		cout << d.at(1);
	}

	breaker();

	{
		deque<int> d {1, 2, 3, 4, 5};
		display(d);
		d.push_back(10);
		display(d);
		d.push_front(20);
		display(d);
		cout << "Front: " << d.front() << endl;
		cout << "back: " << d.back() << endl;

		display(d);
		d.pop_front();
		display(d);
		d.pop_back();
		display(d);
	}

	breaker();

	{
		vector<int> vec {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
		deque<int> d;

		for (auto i : vec) {
			(i % 2 == 0)? d.push_front(i) : d.push_back(i);
		}
		cout << "vector: ";
		display(vec);
		display(d);
	}

	breaker();

	{		
		vector<int> vec {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
		deque<int> d;
		for (auto i : vec) 
			d.push_front(i);
		display(d);
	}

	breaker();

	{
		vector<int> vec {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
		deque<int> d;

		copy(vec.begin(), vec.end(), front_inserter(d));
		display(d);
		d.clear();
		copy(vec.begin(), vec.end(), back_inserter(d));
		display(d);
	}

	return 0;	
	
}