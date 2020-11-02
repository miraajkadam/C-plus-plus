/*

Classes can have as many constructors as necessary
Each must have a unique singnature
Defaults constructor is not provided if user defines a custom constructor

Player :: Player () {
	name = "None";
	health = 0;
	xp = 0;
}

Player :: Player (string name_val) {
	name = name_val;
	health = 0;
	xp = 0;
}


Player :: Player (string name_val, int health_val, int xp_val) {
	name = name_val;
	health = health_val;
	xp = xp_val;
}

Player empty;
Player hero {"Hero"};
Player Villian {"Villian"};

Player frank {"Frank", 100, 4};

Player *enemy = new Player ("Enemy", 100, 0);
delete enemy;
*/