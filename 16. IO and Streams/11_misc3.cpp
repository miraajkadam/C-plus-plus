#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main () {
	ios_base::sync_with_stdio (false);

	ifstream infile;
	infile.open("11.txt");
	if (!infile) {
		cerr << "Error in opening the file!" << endl;
		return -1;
	}
	string word {}, check {};
	long long int count = 0, tc = 0;
	cout << "Enter the word to search for: ";
	cin >> check;
	while (infile >> word) {
		if (word.find(check) != string::npos)
			count++;
		tc++;

	}
	cout << tc << " words were seached" << endl;
	cout << "The substring " << check << " was found " << count << " times" << endl;

	return 0;	
}