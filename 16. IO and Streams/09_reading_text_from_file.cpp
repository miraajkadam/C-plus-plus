/*

fstream and ifstream 
#include <fstream>

*/

#include <iostream>
#include <fstream>

using namespace std;

int main () {
	ios_base::sync_with_stdio (false);

	ifstream infile;
	string line;
	int num;
	double d;
	infile.open("07_1.txt");

	if (!infile) {
		cerr << "Couldn't open the file!";
		return 1;
	}
	infile >> line;
	
	infile >> num >> d;
	cout << line << endl 
		 << num << endl 
		 << d << endl;

	infile.close();

	cout << endl << endl;

	ifstream infile2;
	string  line2;
	infile2.open("07_2.txt");
	if (!infile2) {
		cerr << "Couldn't open the file!";
		return 1;
	}

	// while (!infile2.eof()) {
		// getline(infile2, line2);
	while (getline(infile2, line2)) {
		cout << line2 << endl;
	}

	cout << endl << endl;
	ifstream infile3;
	string line3;
	infile3.open("07_3.txt");
	if (!infile) {
		cout << "Couldn't open the file!";
		return 1;
	}
	while (getline(infile3, line3)) {
		cout << line3 << endl;
	}

	return 0;	
}