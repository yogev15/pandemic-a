#include "Player.hpp"
#include "City.hpp"
#include "Board.hpp"
#include "Medic.hpp"

using namespace pandemic;

Player& Medic::treat(City city){
    return *this;
}
