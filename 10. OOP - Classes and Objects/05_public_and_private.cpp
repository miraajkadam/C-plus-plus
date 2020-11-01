/*

public
- accessible everywhere

private
- accessible only by members or friends of the class

protected
- used within inheritence

public
class Classname {
	public:
		//declaration (s);
}

private 
class Classname {
	private:
		//declaration (s);
}

protected 
class Classname {
	protected:
		//declaration (s);
}

class Player {
	private:
		string Name;
		int xp;
		int health;
	public:
		bool is_dead();
		int set_health();
}

*/

#include <iostream>

using namespace std;

class Player {
	string name = "Player";
	int health;
	int xp;
public:
	void talk (string text) {
		cout << name << " says " << text;
	}

	bool is_dead ();
};

int main () {
	ios_base::sync_with_stdio (false);

	Player *frank = new Player();
	frank->talk ("Hello");

	return 0;	
}