#include "doctest.h"
#include "Board.hpp"
#include "FootSoldier.hpp"
#include "FootCommander.hpp"

using namespace std;
using namespace WarGame;

TEST_CASE("TEST A")
{
    Board b(3,3);
    CHECK(b.has_soldiers(1) == false);
    CHECK(b.has_soldiers(2) == false);
}
