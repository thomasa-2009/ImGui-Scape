//
// Created by Thomas Anwandter on 25/6/2024.
//

#ifndef ADMIN_PANEL_H
#define ADMIN_PANEL_H
#include <string>
#include <utils/imgui_utils.h>

#include "game/player.h"


class admin_panel {
private:
    std::string name = "Admin";

public:
    int init();
};


#endif //ADMIN_PANEL_H
