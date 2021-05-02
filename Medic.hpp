#pragma once
#include "Player.hpp"
#include "City.hpp"
#include "Board.hpp"

namespace pandemic{

    //cure the city he is in
    //if the city alraedy dicovered a cure, the city automaticly cured
    class Medic : public Player{

        public:
            Medic(Board board, City city) : Player(board, city) {}

            Player& treat(City city);

    };
}