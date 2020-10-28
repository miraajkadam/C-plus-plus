/*

#include <string>
std namespace
contiguous in memory
dynamic size
works with input and output streams

*/


#include <iostream>
#include <string>
using namespace std;

int main () {
	ios_base::sync_with_stdio (false);

	string part1 = "c++ ", part2 = "poweful";
	string full = part1 + part2;

	cout << full << endl;
	cout << full.at(10);

	for (int i : full) 
		cout << i << " "; // outputs ascii

	cout << endl;
	full.erase (0, 4);
	cout << full;

	cout << endl;

	string name = "Miraaj Kadam";
	size_t pos = name.find ("Kadam");
	if (pos != string::npos)
		cout << pos;

	return 0;	
}