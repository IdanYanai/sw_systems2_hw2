#include "player.hpp"

using namespace std;

namespace ariel {
    class Game {
        Player p1, p2;

    public:
        Game(Player& p1to, Player& p2to) {p1 = p1to; p2 = p2to;}
        void playTurn() {}
        void printLastTurn() {}
        void playAll() {}
        void printWiner() {}
        void printLog() {}
        void printStats() {}
    };
}