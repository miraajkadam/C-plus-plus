/*

Doing literally everything through functions

*/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void disp_list (vector<int> &vc) {
	if (vc.size() == 0)
		cout << "No elements in the vector";
	else 
		for (int i : vc)
			cout << i << " ";
	cout << endl;
}

void print_menu () {
	cout << "1. Print vector" << endl;
	cout << "2. Add a number" << endl;
	cout << "3. Remove the number" << endl;	
	cout << "4. Find the Mean" << endl;
	cout << "5. Find the Biggest Element" << endl;
	cout << "6. Find the Smallest" << endl;
	cout << "7. Quit" << endl;
	cout << "Enter your choice:: ";
}

void add_num (vector<int> &vc) {
	int n;
	cout << "Enter the number to be added: ";
	cin >> n;
	vc.push_back (n);
	cout << endl;	
}

void rem_num (vector<int> &vc) {
	if (vc.size() == 0)
		cout << "No elements in the vector!";
	else {
		int n;
		cout << "Enter the number to be remove: ";
		cin >> n;
		auto itr = find (vc.begin(), vc.end(), n);
		if (itr != vc.end()) {
			int index = distance (vc.begin(), itr);
			vc.erase (vc.begin() + index);
		}
		else {
			cout << "Element not in the vector";
		}
	}
	cout << endl;	
}

void find_mean (vector<int> &vc) {
	if (vc.size() == 0)
		cout << "No elements in the vector!";
	else {
		int size = vc.size(), sum = 0;
		for (int i : vc)
			sum += i;
		cout <<  "Mean is: " << (double) sum / (double) size << endl;
	}
	cout << endl;	
}

void find_big (vector<int> &vc) {
	if (vc.size() == 0)
		cout << "No elements in the vector!";
	else {
		int biggest = vc[0];
		for (int i : vc) 
			if (i > biggest) 
				biggest = i;
		cout << "Biggest element in the vector: " << biggest << endl;		
	}
	cout << endl;
}

void find_small (vector<int> &vc) {
	if (vc.size() == 0) 
		cout << "No elements in the vector!";
	else {
		int smallest = vc[0];
		for (int i : vc)
			if (i < smallest)
				smallest = i;
		cout << "Smallest element in the vector: " << smallest << endl;
	}
	cout << endl;
}

void bye () {
	cout << "Good  Bye..!" << endl;
}

void de () {
	cout << "Please enter a valid choice!" << endl;
}
 
int main () {
	ios_base::sync_with_stdio (false);
	char ch {};
	vector<int> vc;

	do {
		print_menu ();
		cin >> ch;
		switch (ch) {
			case '1': disp_list (vc);
				break;
			case '2': add_num (vc);
				break;
			case '3': rem_num (vc);
				break;
			case '4': find_mean (vc);
				break;
			case '5': find_big (vc);
				break;
			case '6': find_small (vc);
				break;
			case '7': bye ();
				break;
			default: de ();
		}
	} while (ch != '7');	

	return 0;	
}