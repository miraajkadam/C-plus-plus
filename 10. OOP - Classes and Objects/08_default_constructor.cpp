/*

Does not expect any arguments
- Also called no args constructor

If no constructers are written the C++ will generate Default Constructor that does nothing
Called when we instantiate a new object with no arguments

// compiler generator constructor will be called if below two are executed without any constructor defined
Player frank;
Player *enemy = new Player();

*/

#include <iostream>

using namespace std;

class Player {
	string name;
	int health;
	int xp;
public:
	void set_name (string name_val) {
		name = name_val;
	}

	string get_name () {
		return name;
	}

	// Player() {
	// 	name = "None";
	// 	health = 100;
	// 	xp = 3;
	// }

	Player (string namev, int healthv, int xpv) {
		name = namev;
		health = healthv;
		xp = xpv;
	}
};

int main () {
	ios_base::sync_with_stdio (false);

	Player frank ("Frank", 100, 1);
	// frank.set_name ("Frank");
	cout << frank.get_name () << endl;;

	return 0;	
}