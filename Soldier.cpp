#ifndef WARGAME_A_SOLDIER_CPP
#define WARGAME_A_SOLDIER_CPP

#include <iostream>
#include <string>
#include <stdexcept>
#include <vector>
#include "Soldier.hpp"

using namespace std;



Soldier::Soldier(int team)
{
    _team = team;
}

void Soldier::action(Soldier*& s) //empty function
{
    cout << "Soldier Action" << endl;
    
    s->_health = _health - _impact; //general formula for offensive soldiers
}

Soldier*& Soldier::find_target(std::vector<std::vector<Soldier*>> board)
{
    cout << "Soldier Find Target" << endl; //unused virtual method
    Soldier* s;
     return s;
}


#endif
