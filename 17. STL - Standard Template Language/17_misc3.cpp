#include <iostream>
#include <fstream>
#include <map>
#include <set>
#include <iomanip>
#include <sstream>

using namespace std;

string clean_string(const string &s) {
    string result;
    for (char c: s) {
        if (c == '.' || c == ',' || c == ';' || c == ':')
            continue;
        else
            result += c;
    }
    return result;
}

int main() {
	ios_base::sync_with_stdio(false);

	ifstream infile;
	infile.open("words.txt");
	if (!infile) {
		cerr << "Error opening the input file!" << endl;
		return -1;
	}

	// Part 1
	{ 
		string word {};
		map<string, int> mp;

		while (infile >> word) {
			mp[clean_string(word)]++;
		}

		cout << setw(12) << left << "\nWord" << setw(7) << right << "Count"<< endl;
	    cout << "===================" << endl;
	    for (auto pair : mp)
	        cout << setw(12) << left << pair.first << setw(7) << right << pair.second << endl;
	}

	infile.close();

	infile.open("words.txt");
	if (!infile) {
		cerr << "Error opening the input file!" << endl;
		return -1;
	}

	// Part 2 
	{
		map<string, set<int>> mp;
		string line, word;
		int num {0};
		while (getline(infile, line)) {
			string word {};
			num++;
			stringstream iss {line};
			while (iss >> word)
				mp[word].insert(num);
		}

		cout << setw(12) << left << "\nWord" << "Occurrences"<< std::endl;
    	cout << "==============================================" << endl;
		for (auto pair: mp) {
	        cout << setw(12) << left << pair.first 
	                       << left << "[ ";
	        for (auto i: pair.second) 
	            cout << i << " ";
	        cout << "]" << endl;
	    }
	}

	infile.close();

	return 0;	
}