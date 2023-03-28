#include <string>

#ifndef PLAYER
#define PLAYER

using namespace std;

namespace ariel {
    class Player {
        string name;

        public:
            Player() {this->name = "Idan";}
            Player(string name) {this->name = name; }
            int stacksize() {return 1;}
            int cardesTaken() {return 1;}
            bool isInGame() {return true;}
            void setInGame(bool status) {}
            string getName() {return this->name;}
    };
}

#endif