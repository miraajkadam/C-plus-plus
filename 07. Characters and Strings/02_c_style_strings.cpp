/*

sequence of characters
- contiguous in memory
- implemented as array of character
- terminated by a null character (null) - Character with a value of zero

String literal
- sequecnce of characters - "Miraaj"
- constant
- terminated by a null character (null)

*/

#include <iostream>
#include <cstring>
#include <cctype>

using namespace std;

int main () {
	ios_base::sync_with_stdio (false);

	char first_name[20] {"Miraaj"};
	char last_name[20] {"Kadam"};
	char full_name[20] {};
	char temp[20] {};

	// cout << first_name << endl << last_name << endl;

	// strcpy(full_name, first_name);
	// strcat(full_name, " ");
	// strcat(full_name, last_name);
	// cout << full_name;

	cout << "Enter full name: ";
	// cin >> full_name;

	// cout << full_name; // only takes upto white space

	cin.getline (full_name, 50); // input everything including spaces
	cout << full_name;
	// temp {"Hello"};
	cout << strcmp(full_name, temp);

	return 0;	
}