// Made by Thomas Anwandter
// Includes
#include <game/player.h>
#include <game/game.h>

// Libraries
#include <iostream>
#include "panels/admin_panel.h"

player my_player;
game game;
admin_panel admin;
int main()
{
    game.start([]() {
        admin.init();
    });
    return 0;
}
