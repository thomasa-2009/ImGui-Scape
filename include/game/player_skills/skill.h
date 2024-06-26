//
// Created by Thomas Anwandter on 25/6/2024.
//

#ifndef SKILL_H
#define SKILL_H
#include <string>


class skill {
public:
    std::string name;
    int id;
    skill(std::string &name, int id);
};

enum Skill {
    Combat = 0,
    Woodcutting = 1,
    Mining = 2,
    Crafting = 3
};

std::string_view skill_to_name(Skill skill);



#endif //SKILL_H
