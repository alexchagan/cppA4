#include <iostream>
#include <string>
using namespace std;
#include "Sniper.hpp"

Sniper::Sniper(int team) 
: Soldier(team)
{
    _team = team;
    _health = 100;
    _impact = 50;
    _type = "Sniper";
}

Soldier*& Sniper::find_target(std::vector<std::vector<Soldier*>> board)
{
    cout << "Sniper Find Target" << endl; //insert here
    Soldier* s;
     return s;
}

