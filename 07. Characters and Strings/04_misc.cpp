#include <iostream>
#include <string>

using namespace std;

int main () {
	ios_base::sync_with_stdio (false);

	string s1;
	cout << "Enter your message to be ciphered: ";
	getline (cin, s1);

	string ciphered {};

	for (int i = 0; i < s1.size(); i++) {
		ciphered += (char) (s1[i] + 5);
	}

	cout << ciphered << endl;

	string decipher;

	for (int i = 0; i < ciphered.size(); i++) {
		decipher += (char) (ciphered[i] - 5);
	}

	cout << decipher;
	
	return 0;	
}