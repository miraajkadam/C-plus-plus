#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

int main () {
	ios_base::sync_with_stdio (false);

	ifstream infile;
	infile.open("10.txt");
	if(!infile) {
		cout << "Cannot open file!";
		return -1;
	}
	int total = 0, stud = 0;
	string check;
	infile >> check;
	cout << setw(10) << left << "Student" << setw(10) << right << "Score" << endl;
	cout << setw(20) << setfill('-') << '-'<< endl;

	while(!infile.eof()) {
		string sub, name;
		stud++;
		int score = 0;
		infile >> name >> sub;
		if (sub[0] == check[0])
			score++;
		if (sub[1] == check[1])
			score++;
		if (sub[2] == check[2])
			score++;
		if (sub[3] == check[3])
			score++;
		if (sub[4] == check[4])
			score++;

		cout << setw(10) << setfill(' ') << left << name;
		cout << setw(10) << setfill(' ') << right << score;
		cout << endl;

		total += score;
	}
	cout << setw(20) << setfill('-') << '-'<< endl;	
	cout << setfill(' ');
	cout << setw(13) << left << "Average Score" << setw(7) << right << (double) total / stud;

	infile.close();
	
	return 0;	
}