/*

class Class_Name {
	// declaration (s);
};

class Player {
	// attributes
	string name;
	int health;
	int xp;

	//methods
	void talk (string test_to_say);
	bool is_dead ();
}

// objects
Player frank; 
Player hero;

Player *enemy = new Player(); // pointer to object
delete enemy;

*/

#include <iostream>
#include <vector>
// #include <string>
using namespace std;

class Player {
	// attributes
	string name;
	int health;
	int xp;

	// methods
	void talk (string);
	bool is_dead ();
};

class Account {
	string name {"Account"}; // initialization allowed in C++11 and above.
	double balance {0.0};

	bool deposit (double);
	bool widhdraw (double);
};

int main () {
	ios_base::sync_with_stdio (false);

	Player frank, hero;

	Player *enemy {nullptr};
	enemy = new Player;
	delete enemy;
		
	Player players[] {frank, hero};

	vector<Player> player_vec {frank};
	player_vec.push_back(hero);


	Account frank_account, jim_account;
	return 0;	
	
}