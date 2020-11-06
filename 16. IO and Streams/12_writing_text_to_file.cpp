/*

fstream and ofstream
#include <fstream>

if the file does not exist it will be created and if it does it will be overwritten (only if its a outfile object)

ios::app -> append to file so that it does not get ovewritten
*/

#include <iostream>
#include <fstream>

using namespace std;

int main () {
	ios_base::sync_with_stdio (false);

	// ofstream outfile("12_1.txt", ios::app);
	// if(!outfile) {
	// 	cerr << "Error in file!" << endl;
	// 	return -1;
	// }
	// string line;
	// cout << "Enter something to write in file: ";
	// getline(cin, line);
	// outfile << line << endl;

	// outfile.close();

	ifstream infile;
	ofstream outfile;
	infile.open("08_3.txt");
	outfile.open("12_2.txt");

	if(!infile) {
		cout << "Problem in input file";
		return -1;
	}
	else if (!outfile) {
		cout << "Problem in outfile!";
		return -1;
	}

	string line;
	while (getline(infile, line)) {
		outfile << line << endl;
	}

	infile.close();
	outfile.close();

	return 0;	
}