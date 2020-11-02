/*

when objects are copied C++ must create a new object from an existing object

When is a copy of an object made?
- passing object by value as a parameter
- returnining an object from a function by value
- constructing object based on another of the same class

if not provided own way of copying objects by value then the copuler provides a defaults way of copying objects
copies the values of each data member to the new object
- default memberwise copu

- Pointer will not be copied
- Not what it is pointing to
- Shallow vs. Deep Copy

Syntax
Type::Type (const Type &source);

Player::Player (const Player &source);
Account::Account (const Account &source);

*/

#include <iostream>

using namespace std;

class Player {
	string name;
	int health;
	int xp;
public:
	string get_name () {
		return name;
	}
	int get_health() {
		return health;
	}
	int get_xp() {
		return xp;
	}

	Player(string name_val = "None", int health_val = 100, int xp_val = 0);

	// Copy Constructor
	Player (const Player &source);

	// Destructor
	~Player() { cout << "Destructor is being called for " << name << endl; }
};

Player::Player(string name_val, int health_val, int xp_val) : name{name_val}, health{health_val}, xp{xp_val}{ cout << "All Args Constructor for " + name << endl; };

Player::Player(const Player &source) 
	// : name (source.name), health (source.health), xp (source.xp) { // without delegating
	: Player{source.name, source.health, source.xp} { // delegating
	cout << "Copy constructor - made copy of " << source.name << endl;
}

void display_player (Player p) {
	cout << "Name: " << p.get_name() << endl;
	cout << "Health: " << p.get_health() << endl;
	cout << "xp: " << p.get_xp() << endl;
}

int main () {
	ios_base::sync_with_stdio (false);

	Player empty {"XXXXXX", 100, 50};
	Player my_new_object {empty};

	display_player(empty);
	Player frank("frank");
	Player hero("hero", 100);
	Player villian("Villian", 100, 55);
	
	return 0;	
}