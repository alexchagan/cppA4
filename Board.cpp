#include <string>
#include <vector>
#include <stdexcept>
#include "Board.hpp"
using namespace WarGame;

 Soldier*& Board::operator[](std::pair<int,int> location)
 {
     Soldier* s = nullptr;
     //vector<Soldier*> v1 = board.at(location.first);
     //v1.erase(location.second);
    // v1.insert(location.second, s);
     return s;
 }
 
 Soldier* Board::operator[](std::pair<int,int> location) const
 {
     return nullptr;
 }
 
 void Board::move(uint player_number, std::pair<int,int> source, MoveDIR direction)
 {
     return;
 }
 
 bool Board::has_soldiers(uint player_number) const
 {
//      for(int i = 0; i<board.size(); i++)
//      {
//       vector<Soldier*> v = board.at(i);
//       for(int j=0; j<v.size(); j++)
//       {
//        if(v.at(j)->_team == player_number)
//         return true;
//       }
//      }
//      return false;
  return true;
 }
