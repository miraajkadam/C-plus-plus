/*

stringstream, istringstream, ostringstream
#include <sstream>

*/

#include <iostream>
#include <sstream>
#include <string>
#include <limits>

using namespace std;

int main () {
	ios_base::sync_with_stdio (false);

	int num; double total; string name;

	string info {"Moe 100 1234.5"};
	istringstream iss {info};
	iss >> name >> num >> total;
	cout << name << " " << num << " " << total << endl;

	ostringstream oss {};
	oss << name << " " << num << " " << total;
	cout << oss.str() << endl;

	string entry; int n;

	bool flag = false;
	do {
		cout << "Enter an integer: ";
		cin >> entry;
		istringstream is {entry};
		if (is >> n) 
			flag = true;
		else
			cout << "Not an integer!" << endl;

		cin.ignore(numeric_limits<streamsize>::max(),'\n');
	} while(!flag);

	cout << "Entered value: " << n;
	return 0;	
}