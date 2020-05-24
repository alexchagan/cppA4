#ifndef WARGAME_A_FOOTSOLDIER_CPP
#define WARGAME_A_FOOTSOLDIER_CPP


#include <iostream>
#include <string>
#include <stdexcept>
#include <vector>
#include "Soldier.hpp"
#include "FootSoldier.hpp"
using namespace std;
using namespace WarGame;



FootSoldier::FootSoldier(int team) 
: Soldier(team)
{
    _team = team;
    _health = 100;
    _impact = 10;
    _type = "Foot Soldier";
}

Soldier*& FootSoldier::find_target(std::vector<std::vector<Soldier*>> board)
{
    cout << "FootSoldier Find Target" << endl; //insert here
    Soldier* s;
     return s;
}




#endif
