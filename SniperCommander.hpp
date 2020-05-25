#include <iostream>
#include <string>
#include <stdexcept>
#include <vector>
#include "Sniper.hpp"
using namespace std;

class SniperCommander : public Sniper
{
  public:
  SniperCommander(int team);
};