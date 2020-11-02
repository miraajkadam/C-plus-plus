#include <iostream>
#include "Player.h"

using namespace std;

void display_active_player() {
    cout << "Active Players: " << Player :: get_num_players() << endl;
}

int main () {
    display_active_player(); 
    Player hero {"hero"};
    display_active_player(); 
    
    {
        Player frank {"Frank"};
        display_active_player(); 
    }
    display_active_player();
    Player *enemy = new Player("Enemy", 100, 50);
    display_active_player();
    delete enemy;
    display_active_player(); 

    return 0;
}