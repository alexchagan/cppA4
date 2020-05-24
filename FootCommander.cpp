#ifndef WARGAME_A_FOOTCOMMANDER_CPP
#define WARGAME_A_FOOTCOMMANDER_CPP

#include <iostream>
#include <string>
#include <stdexcept>
#include <vector>
#include "FootCommander.hpp"
using namespace std;

FootCommander::FootCommander(int team)
: FootSoldier(team) 
{
    _team = team;
    _health = 150;
    _impact = 20;
    _type = "Foot Commander";
}

#endif