/*

Constructor calling another constructor
No args constructor can call All args constructor instead specifying all the values by itself.

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

Player::Player(string name_val, int health_val, int xp_val) : name{name_val}, health{health_val}, xp{xp_val}{ cout << "All Args Constructor" << endl; };
Player::Player() : Player("None", 100, 0) { cout << "No Args Constructor" << endl; };
Player::Player(string name_val) : Player (name_val, 100, 0) { cout << "One Args Constructor" << endl; };
 

int main () {
	ios_base::sync_with_stdio (false);

	
	Player empty;
	cout << empty.get_name() << endl;

	Player miraaj("miraaj");
	cout << miraaj.get_name() << endl;

	Player enemy ("Enemy", 100, 100);
	cout << enemy.get_name () << endl;
	
	return 0;	
}