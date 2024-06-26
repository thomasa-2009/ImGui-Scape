//
// Created by Thomas Anwandter on 25/6/2024.
//

#include "skill.h"

std::string_view skill_to_name(Skill skill) {
    switch (skill) {
        case Skill::Combat: return "Combat";
        case Skill::Crafting: return "Crafting";
        case Skill::Mining: return "Mining";
        case Skill::Woodcutting: return "Woodcutting";
    }
}