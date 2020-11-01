/*

class Player {
	string name;
	int health;
	int xp;
public:
	// Overloaded Constructors
	Player();
	Player(string name);
	Player(string name, int health, int xp);
};

Destructors 
- Class name with tilde (~)
- No return type and no parameters
- Useful to release memory and other resources
- Invoked automatically when an object is destroyed
- Only 1 destructor is allowed per class - cannot be overloaded!

class Player {
	string name;
	int health;
	int xp;
public:
	Player();
	Player(string name);
	Player(string name, int health, int xp);
	~Player(); // destructer
};

*/

#include <iostream>

using namespace std;

class Player {
	string name = "Player";
	int health;
	int xp;
public:
	void set_name (string name_val) {
		name = name_val;
	}

	Player() {
		cout << "No Args Constructor called for " << name << endl;
	}

	Player(string name) {
		cout << "String arg Constructor called for " << name << endl;
	}

	Player(string name, int health, int xp) {
		cout << "Three args Constructor called for " << name <<  endl;
	}

	~Player () {
		cout << "Destructor called for " << name << endl;
	}
};

int main () {
	ios_base::sync_with_stdio (false);

	{
		Player Slayer;
		Slayer.set_name("Slayer");
	}

	{
		Player frank;
		frank.set_name ("Frank");
		Player hero ("Hero");
		hero.set_name ("hero");
		Player villian("villian", 100, 12);
		villian.set_name("villian");

	}

	Player *enemy = new Player();
	enemy->set_name("enemY");

	Player *level_boss = new Player ("level_boss", 100, 9);
	level_boss->set_name("Level Boss");

	delete enemy;
	delete level_boss;

	return 0;	
}