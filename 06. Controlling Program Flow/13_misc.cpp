#include <iostream>
#include <vector>

using namespace std;

int main () {
	// ios_base::sync_with_stdio (false);

	vector<int> nums;
	char ch;
	do {
		cout << "P - Print numbers" << endl;
		cout << "A - Add a number" << endl;
		cout << "M - Display mean of the numbers" << endl;
		cout << "S - Display the smalled number" << endl;
		cout << "L - Display the largest number" << endl;
		cout << "Q - Quit" << endl;
		cout << "Enter your choice: ";
		cin >> ch;

		switch (ch) {
			case 'p':
			case 'P': {
				if (nums.size() == 0)
					cout << "No numbers to print!" << endl;
				else 
					for (auto i : nums)
						cout << i << " ";				
			}
			break;

			case 'a':
			case 'A': {
				int x;
				cout << "Enter the number to be added: ";
				cin >> x;
				nums.push_back(x);
			}
			break;

			case 'm':
			case 'M': {
				if (nums.size() == 0)
					cout << "No numbers in the list!" << endl;
				else {
					int sum = 0;
					for (int i : nums) {
						sum += i;
					}
					cout << "Average= " << sum / nums.size();
				}
			}
			break;

			case 's':
			case 'S': {
				if (nums.size() == 0) 
					cout << "No numbers in the list!" << endl;
				else {
					int smallest = nums[0];
					for (int i : nums) {
						if (smallest < i) 
							smallest = i;
					}
				}
			}
			break;

			case 'l':
			case 'L': {
				if (nums.size() == 0)
					cout << "No numers in the list!" << endl;
				else {
					int largest = nums[0];
					for (int i : nums) {
						if (largest > i) 
							largest = i;
					}
				}
			}
			break;

			case 'q':
			case 'Q': cout << "Good Bye...!" << endl;
			break;

			default: cout << "Illegal choice, Enter again";
		}
	} while (ch != 'Q' || ch != 'q');
	return 0;	
}