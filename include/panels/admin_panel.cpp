//
// Created by Thomas Anwandter on 25/6/2024.
//

#include "admin_panel.h"

#include <imgui/imgui.h>

#include "game/player.h"
#include "game/player_skills/skill.h"

int admin_panel::init() {
    ImGuiUtils::NewPanel(name, []() {
        ImGuiUtils::Button("Print Hello, world!", true, "Self-explanitory", []() {
            std::cout << skill_to_name(Skill::Combat) << endl;
        });
    });
    return 0;
}
