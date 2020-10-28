/*

int main () {
	// process 1
	statement1;
	statement2;
	statement3;
	statement4;
	statement5;

	// process 2
	statement1;
	statement2;
	statement3;
	statement4;
	statement5;

	// process 3
	statement1;
	statement2;
	statement3;
	statement4;
	statement5;

}

int main () {
	process1 ();
	process2 ();
	process3 ();	
}

*/

#include <iostream>
#include <cmath>
#include <ctime>

using namespace std;

int main () {
	ios_base::sync_with_stdio (false);
	// double num;
	// cout << "Enter the number: ";
	// cin >> num;

	// cout << sqrt (num) << endl;
	// cout << cbrt (num) << endl;
	// cout << pow (num, 10) << endl;

	int random;
	int min = 1, max = 6;

	cout << RAND_MAX;
	srand (time(nullptr)); // seeding random number generator

	for (int i = 0; i < 10; i++) {
		random = rand() % max + min;
		cout << random << endl;
	}

	return 0;	
}