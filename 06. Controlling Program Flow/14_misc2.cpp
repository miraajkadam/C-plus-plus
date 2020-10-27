#include <iostream>
#include <vector>

using namespace std;

int main () {
	// ios_base::sync_with_stdio (false);

	vector<int> nums;
	char ch;
	do {
		cout << endl;
		cout << "P - Print numbers" << endl;
		cout << "A - Add a number" << endl;
		cout << "M - Display mean of the numbers" << endl;
		cout << "S - Display the smalled number" << endl;
		cout << "L - Display the largest number" << endl;
		cout << "Q - Quit" << endl;
		cout << "Enter your choice: ";
		cin >> ch;

		if (ch == 'p' || ch == 'P') {
				if (nums.size() == 0)
					cout << "No numbers to print!" << endl;
				else 
					for (auto i : nums)
						cout << i << " ";				
			}
			
		else if (ch == 'A' || ch == 'a') {
				int x;
				cout << "Enter the number to be added: ";
				cin >> x;
				nums.push_back(x);
			}
			
		else if (ch == 'M' || ch == 'm') {
				if (nums.size() == 0)
					cout << "No numbers in the list!" << endl;
				else {
					int sum = 0;
					for (int i : nums) {
						sum += i;
					}
					cout << "Average= " << (double) sum / nums.size();
				}
			}
			
		else if (ch == 's' || ch == 'S') {
				if (nums.size() == 0) 
					cout << "No numbers in the list!" << endl;
				else {
					int smallest = nums[0];
					for (int i : nums) {
						if (i < smallest) 
							smallest = i;
					}
					cout << "smallest number= " << smallest;					
				}
			}
			
		else if (ch == 'l' || ch == 'L')  {
				if (nums.size() == 0)
					cout << "No numers in the list!" << endl;
				else {
					int largest = nums[0];
					for (int i : nums) {
						if (i > largest) 
							largest = i;
					}
					cout << "Largest number= " << largest;
				}
			}
		else if (ch == 'q' || ch == 'Q') 
			cout << "Good Bye...!" << endl;
			
		else 
			cout << "Illegal choice, Enter again";		
	} while (ch != 'Q' && ch != 'q');
	return 0;	
}