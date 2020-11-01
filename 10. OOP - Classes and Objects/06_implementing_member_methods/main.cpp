#include <iostream>
#include "Account.h"

using namespace std;

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