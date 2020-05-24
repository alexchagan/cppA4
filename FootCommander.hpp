#ifndef WARGAME_A_FOOTCOMMANDER_HPP
#define WARGAME_A_FOOTCOMMANDER_HPP

#include <iostream>
#include <string>
#include <stdexcept>
#include <vector>
#include "FootSoldier.hpp"
using namespace std;

class FootCommander : public FootSoldier
{
  public:
  FootCommander(int team);
};

#endif
