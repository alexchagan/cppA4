#include "doctest.h"
#include "Board.hpp"
#include "Army.hpp"

using namespace std;
using namespace WarGame;

TEST_CASE("TEST A")
{
    Board b(3,3);
    CHECK(b.has_soldiers(1) == false);
    CHECK(b.has_soldiers(2) == false);
}