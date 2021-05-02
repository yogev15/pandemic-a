#pragma once
#include "Player.hpp"
#include "City.hpp"
#include "Board.hpp"


namespace pandemic{

    //can build in his city without using a build card
    class OperationsExpert : public Player{

        public:

            OperationsExpert(Board& board, City city) : Player(board,city) {}
            
            Player build();

    };
}