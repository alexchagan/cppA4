#ifndef WARGAME_A_FOOTSOLDIER_HPP
#define WARGAME_A_FOOTSOLDIER_HPP

#include <iostream>
#include <string>
#include <stdexcept>
#include <vector>
using namespace std;
#include "Soldier.hpp"


class FootSoldier : public Soldier
{
  public:
  FootSoldier(int team);
  Soldier*& find_target(std::vector<std::vector<Soldier*>> board);
};

#endif
