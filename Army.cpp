#include <iostream>
#include <string>
using namespace std;
#include "Army.hpp"


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

//-----------------------------------//

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



//-------------------------//

FootCommander::FootCommander(int team)
: FootSoldier(team) 
{
    _team = team;
    _health = 150;
    _impact = 20;
    _type = "Foot Commander";
}

//-------------------------//

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


//-------------------------//

SniperCommander::SniperCommander(int team)
: Sniper(team) 
{
    _team = team;
    _health = 120;
    _impact = 100;
    _type = "Sniper Commander";
}

//-------------------------//

Paramedic::Paramedic(int team) 
: Soldier(team)
{
    _team = team;
    _health = 100;
    _impact = 0;
    _type = "Paramedic";
}

Soldier*& Paramedic::find_target(std::vector<std::vector<Soldier*>> board)
{
    cout << "Paramedic Find Target" << endl; //insert here
    Soldier* s;
     return s;
}

void Paramedic::action(Soldier*& s) 
{
    cout << "Paramedic Action" << endl; //insert here
}

//-------------------------//

ParamedicCommander::ParamedicCommander(int team)
: Paramedic(team) 
{
    _team = team;
    _health = 200;
    _impact = 0;
    _type = "Paramedic Commander";
}

//-------------------------//
//-------------------------//

// int main()
// {
//     FootSoldier s1(1);
//     Soldier s(1);
//     FootCommander s2(2);
//     Sniper sn(1);
//     SniperCommander sn1(2);
    
//     cout << sn._type << endl;
//      cout << sn._health << endl;
    
     
//   return 0;
// }