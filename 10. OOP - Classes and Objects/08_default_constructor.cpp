/*

Does not expect any arguments
- Also called no args constructor

If no constructers are written the C++ will generate Default Constructor that does nothing
Called when we instantiate a new object with no arguments

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

	Player() {
		name = "None";
		health = 100;
		xp = 3;
	}
};

int main () {
	ios_base::sync_with_stdio (false);

	Player frank;
	frank.set_name ("Frank");
	cout << frank.get_name () << endl;;

	return 0;	
}