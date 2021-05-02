#pragma once
#include "Player.hpp"
#include "City.hpp"
#include "Board.hpp"

namespace pandemic{

    //finds a cure using a speciffic number of cards
    class Scientist : public Player{
        private:
            int cards;

        public:
            Scientist(Board board, City city,int cards) : Player(board,city){}

            Player& discover_cure(City city);

    };
}