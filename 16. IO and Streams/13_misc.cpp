#include <iostream>
#include <fstream>

using namespace std;

int main () {
	ios_base::sync_with_stdio (false);

	ifstream infile;
	ofstream outfile;

	infile.open("11.txt");
	outfile.open("13_01.txt");

	if (!infile) {
		cout << "Problem in infile!";
		return -1;
	}

	else if (!outfile) {
		cout << "Problem in outfile";
		return -1;
	}

	string line {};
	int i = 1;
	while (getline(infile, line)) {
		if (line == "") {
			outfile << endl;
		}
		else {
			outfile << i << ".   " << line << endl;
			i++;
		}
	}

	infile.close();
	outfile.close();	

	return 0;	
}