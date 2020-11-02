/*

Constructor initialization lists 
- are more efficient
- initialization list immediately follows the parameter list
- initializes the data members as the object is created!
- order of initialization is the order of declaration in the class

Previos way:
Player :: Player () 
	name = "None"; // assignment not initialization
	health = 0;
	xp = 0;


Better way:
Player :: Player ()
	: name {"None"}, health {0}, xp {0} {
}

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
	Player();
	Player(string name_val);
	Player(string name_val, int health_val, int xp_val);
};

Player::Player()
	:name{"none"}, health {100}, xp {0} {}

Player::Player(string name_val) : name{name_val}, health{100}, xp{0}{};
Player::Player(string name_val, int health_val, int xp_val) : name{name_val}, health{health_val}, xp{xp_val}{};
 

int main () {
	ios_base::sync_with_stdio (false);

	
	Player empty;
	cout << empty.get_name();

	Player miraaj("miraaj");
	cout << miraaj.get_name();
	
	return 0;	
}