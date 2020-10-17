/*

Vectors - Dynamic Array
-> part of c++ stl (container)
-> can grow and shrink at the time of the execution
-> efficient
-> provides bound checking
-> can use sort, reverse, find etc...
-> all elements are initialized to zero i.e. no garbage values in start

declaring -->
#include <vector>
std::vector<char> vovels;
std::vector<int> test_scores;


*/

#include <iostream>
#include <vector>

using namespace std;

int main () {
	ios_base::sync_with_stdio (false);

	vector<char> vovels (5); // declaring a vector of size 5
	vector<int> test_scores {100, 98, 23, 31, 1}; // initialize vector 

	vector<int> test (5, 1); // initialize 5 elements with 0

	for (auto i : test)
		cout << i << " ";
	return 0;	
}
