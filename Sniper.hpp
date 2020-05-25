#include <iostream>
#include <string>
#include <stdexcept>
#include <vector>
#include "Soldier.hpp"
using namespace std;


class Sniper : public Soldier
{
  public:
  Sniper(int team);
  Soldier*& find_target(std::vector<std::vector<Soldier*>> board);
};