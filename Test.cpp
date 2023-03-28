#include "doctest.h"
#include "sources/game.hpp"
#include "sources/player.hpp"
#include "sources/card.hpp"

using namespace std;
using namespace ariel;

TEST_CASE("TESTING") {
    Player p1;
    Player p2 {"Amit"};
    Game g {p1, p2};
    CHECK(p1.cardesTaken() == 1);
    CHECK(p1.getName() == "Idan");
    CHECK(p1.isInGame() == true);
    CHECK(p1.stacksize() == 1);

    CHECK(p2.cardesTaken() == 1);
    CHECK(p2.getName() == "Amit");
    CHECK(p2.isInGame() == true);
    CHECK(p2.stacksize() == 1);

    CHECK(p1.cardesTaken() == 1);
    CHECK(p1.cardesTaken() == 1);
    CHECK(p1.cardesTaken() == 1);
    CHECK(p1.cardesTaken() == 1);
    CHECK(p1.cardesTaken() == 1);
    CHECK(p1.cardesTaken() == 1);
    CHECK(p1.cardesTaken() == 1);
    CHECK(p1.cardesTaken() == 1);
    CHECK(p1.cardesTaken() == 1);
    CHECK(p1.cardesTaken() == 1);
    CHECK(p1.cardesTaken() == 1);
    CHECK(p1.cardesTaken() == 1);

}