/*

const Player villian {"Villian", 100, 50};

class Player {
private:
	...
public:
	string get_name() const; <-- const keyword in method declaration.
}

*/

#include <iostream>

using namespace std;

class Player {
private:
	string name;
	int health;
	int xp;
public:
	string get_name () const { // <--
		return name;
	}

	void set_name (string name_val) {
		name = name_val;
	}

	Player();
	Player(string name_val);
	Player(string name_val, int	health, int xp_val);
};

Player :: Player() : Player {"None", 0, 0} {}
Player :: Player(string name_val) : Player {name_val, 0, 0} {}
Player :: Player(string name_val, int health_val, int xp_val) : name{name_val}, health{health_val}, xp{xp_val} {}

void dislpay_player_name (const Player &p) {
	cout << p.get_name () << endl;
}

int main () {
	ios_base::sync_with_stdio (false);

	const Player villian {"Villian", 100, 55};
	Player hero {"Hero", 100, 15};
	// villian.xp = 1000;
	cout << villian.get_name() << endl;
	cout << hero.get_name() << endl;

	return 0;	
}