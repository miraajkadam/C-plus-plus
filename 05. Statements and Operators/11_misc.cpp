#include <iostream>

using namespace std;

int main () {
	ios_base::sync_with_stdio (false);

	int n;
	cout << "Enter an amound in cents: ";
	cin >> n;
	cout << endl;
	int dollars, quaters, dimes, nickels, penny, balance = n;
	cout << "Provide me with" << endl;

	dollars = balance / 100;
	balance -= dollars * 100;
	cout << "dollars :" << dollars << endl;

	quaters = balance / 25;
	balance -= quaters * 25;
	cout << "quaters :" << quaters << endl;

	dimes = balance / 10;
	balance -= dimes * 10;
	cout << "dimes :" << dimes << endl;

	nickels = balance / 5;
	balance -= nickels * 5;
	cout << "nickels :" << nickels << endl;

	penny = balance / 1;
	balance -= penny * 1;
	cout << "pennies :" << penny << endl;


	return 0;	
}