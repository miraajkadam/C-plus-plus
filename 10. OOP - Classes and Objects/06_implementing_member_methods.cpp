/*

very similar to implementation function
member methods have access to member attributes so that they don't need to passed by arguments.
can be implemented within classes or in separate file.

class Account {
	int balance;
	private:
		void set_balance (double bal); // declaring inside the class
}

// Outside the class defination
void Account :: set_balance (double bal) { // :: <- scope resolution operator
	balance = bal;
}

=====================================================================
// using .h files
Account.h 
class Account {
	double balance;
	public:
		void set_balance ();
		double get_balance ();
};

=====================================================================
Include Guards
#ifnfed _ACCOUNT_H_
#define _ACCOUNT_H_
	// Account Class declaration
#endif
=====================================================================
Overall Account.h 
#ifnfed _ACCOUNT_H_
#define _ACCOUNT_H_

class Account {
	double balance;
	public:
		void set_balance () { // statements(s);}
		double get_balance () { // statements(s);}
};
#endif

#pragma once <- almost same as Include gaurd

=====================================================================
Account.cpp file
void Account::set_balance (double bal) {
	balance = bal;
}

double Account::get_balance () {
	return bal;
}

=====================================================================
inside main file 
#inclide <iostream>
#include "Account.h"

using namespace std;

int main () {
	Account frank_account;
	frank_account.set_balance (1000.0);
	double bal = frank_account.get_balance();
	cout << bal << endl;
	return 0;
}

*/

#include <iostream>

using namespace std;

class Account {
	string name;
	double balance;
public:
	void set_balance (double bal) {
		balance = bal;
	}
	double get_balance() {
		return balance;
	}
	void set_name(string n);
	string get_name ();
	bool deposit (double amount);
	bool withdraw (double amount);
};

void Account :: set_name (string n) {
	name = n;
}

string Account :: get_name () {
	return name;
}

bool Account :: deposit (double amount) {
	balance += amount;
	return true;

}

bool Account :: withdraw (double amount) {
	if (balance - amount > 0) {
		balance -= amount;
		return true;
	}
	else {
		return false;
	}
}

int main () {
	ios_base::sync_with_stdio (false);

	Account frank_account;
	frank_account.set_name ("Frank");
	frank_account.set_balance (10000.00);

	if(frank_account.deposit(200))
		cout << "Deposit OK" << endl;
	else 
		cout << "Deposit not Allowed" << endl;  

	if (frank_account.withdraw(5000.00))
		cout << "withdraw OK" << endl;
	else 
		cout << "withdraw not allowed" << endl;

	if (frank_account.withdraw(10000.00))
		cout << "withdraw OK" << endl;
	else 
		cout << "withdraw not Allowed" << endl;

	return 0;	
}

