#pragma once
#include "Player.hpp"
#include "City.hpp"
#include "Board.hpp"

namespace pandemic{

    //can cure every city using the city card
    class Virologist : public Player{

        public:

            Virologist(Board board, City city) : Player(board, city) {}

            Player discover_cure(City city);

    };
}