/*

. <-- DOT OPERATOR
Account frank_account;
frank_acoount.balance;
frank_account.deposit (1000.00);

precedence (.) > precedence (*)
(*frank_acoount).balance; // derefence before the DOT operator
(*frank_acoount).deposit (1000.00);

-> <-- ARROW OPERATOR

frank_account->balance;
frank_account->deposit (1000.00);

*/
#include <iostream>

using namespace std;

class Player {
public:
	string name;
	int health;
	int xp;

	void talk (string text) {
		cout << name << " says " << text << endl;
	}

	bool is_dead ();
};

class Account {
public:
	string name {"Account"};
	double balance {0.0};

	void deposit (double bal) {balance += bal; cout << "In Deposit" << endl;}
	void widhdraw (double bal){balance -= bal; cout << "In Withdraw" << endl;};
};

int main () {
	ios_base::sync_with_stdio (false);

	Player frank;
	frank.name = "Frank";
	frank.health = 100;
	frank.xp = 13;

	frank.talk ("Hello");

	Player *enemy = new Player();
	(*enemy).name = "enemy";
	(*enemy).health = 90;
	enemy->xp = 15;
	enemy->talk("You dead boiii");

	Account bill;
	bill.name = "Bill";
	bill.balance = 50000.0;
	bill.deposit (1000.0);
	bill.widhdraw (20000.0);

	cout << bill.balance;

	return 0;	
}