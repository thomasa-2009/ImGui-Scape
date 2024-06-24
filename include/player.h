#include <iostream>
#include <string>
using namespace std;

class Player
{
private:
    string name = "Name";
    int level = 1;

public:
    string getName() { return this->name; }
    void setName(string name) { this->name = name; }
    int getLevel() { return this->level; }
    void setLevel(int level) { this->level = level; }
};