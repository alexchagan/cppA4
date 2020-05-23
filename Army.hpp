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


class FootSoldier : public Soldier
{
  public:
  FootSoldier(int team);
  Soldier*& find_target(std::vector<std::vector<Soldier*>> board);
};


class FootCommander : public FootSoldier
{
  public:
  FootCommander(int team);
};


class Sniper : public Soldier
{
  public:
  Sniper(int team);
  Soldier*& find_target(std::vector<std::vector<Soldier*>> board);
};


class SniperCommander : public Sniper
{
  public:
  SniperCommander(int team);
};


class Paramedic : public Soldier
{
  public:
  Paramedic(int team);
  Soldier*& find_target(std::vector<std::vector<Soldier*>> board);
  void action(Soldier*& s);
};


class ParamedicCommander : public Paramedic
{
  public:
  ParamedicCommander(int team);
};