/*

Friend
- A function or class that has access to private class member
- And, that function of or class is NOT a member of the class it is accessing

Function
- Can be regilar non-member functions
- Can be member methods of another class

Class
- Another class can have access to private class members

Friendship must be granted NOT taken
- Declared explicitly in the class that is granting friendship
- Declared in the function prototype with the keyword friend

Friendship is not symmetric
- Must be explicitly granted
-- If A is a friend of B
-- B is NOT a friend of A

Friend is not transistive
- Must be explicitly granted
-- if A is a friend of B AND
-- B is a friend of C
-- then A is NOT a friend of C

class Player {
	friend void display_player(Player &p);
	string name;
	int health;
	int xp;
public:
	...
};

void display_player(Player &p) {
	cout << p.name << endl;
	cout << p.health << endl;
	cout << p.xp << endl;
}

display_player may also change private data members

class Player {
	friend void Other_class :: display_player (Player &p);
	string name;
	int health;
	int xp;
public:
	...
};

class Other_class {
	...
public:
	void display_player (Player &p) {
		cout << p.name << endl;
		cout << p.health << endl;
		cout << p.xp << endl;
	} 
};
*/