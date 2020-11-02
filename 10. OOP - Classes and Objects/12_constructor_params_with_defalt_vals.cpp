/*

Can often simplify our code and reduce the number of overloaded constructors
same ru

Class Player {
private:
	string name;	
	int health;
	int xp;
public:
	Player (string name_val = "None", int health_val = 100, int xp_val = 0);
};

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
	Player(string name_val = "None", int health_val = 100, int xp_val = 0);
};

Player::Player(string name_val, int health_val, int xp_val) : name{name_val}, health{health_val}, xp{xp_val}{ cout << "All Args Constructor" << endl; };

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