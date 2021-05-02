#pragma once
#include "Player.hpp"
#include "City.hpp"
#include "Board.hpp"

namespace pandemic{

    //can discover cure with any 5 cards
    class GeneSplicer : public Player{

        public:
            GeneSplicer(Board board, City city) : Player(board, city){}

            Player& discover_cure(City city);

    };
}