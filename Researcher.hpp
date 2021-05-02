#pragma once
#include "Player.hpp"
#include "City.hpp"
#include "Board.hpp"

namespace pandemic{

    //can reserch for cure without a reaserch station at the city
    class Researcher : public Player{

        public:

            Researcher(Board board, City city) : Player(board, city) {}
            
            Player& discover_cure(City city);

    };
}