#include <iostream>
#include <string>
#include <stdexcept>
#include <vector>
#include "SniperCommander.hpp"
using namespace std;

SniperCommander::SniperCommander(int team)
: Sniper(team) 
{
    _team = team;
    _health = 120;
    _impact = 100;
    _type = "Sniper Commander";
}