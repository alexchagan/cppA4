#ifndef WARGAME_A_SOLDIER_HPP
#define WARGAME_A_SOLDIER_HPP

#include <iostream>
#include <string>
#include <stdexcept>
#include <vector>
using namespace std;



class Soldier
{
    public:
    int _team, _health, _impact;
    string _type;
   
    Soldier(int team);
    virtual void action(Soldier*& s);
    virtual Soldier*& find_target(std::vector<std::vector<Soldier*>> board);
};


#endif
