/*

C++ class can have both static data and data members
- A single data member that belongs to the class, not the objects
- Useful to store class wide information

Class functions can be declared as static
- Independent of any objects
- can be called using the class name

class Player {
	static int num_player;
public:
	static int get_num_players();
};

#include "Player.h"
int Player :: num_players = 0;

*/