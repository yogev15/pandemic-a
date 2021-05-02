#pragma once
#include "Player.hpp"
#include "City.hpp"
#include "Board.hpp"

namespace pandemic{

    //when he is in a reaserch facility he can fly to every city without using a card
    class Dispatcher : public Player{

        public:
            Dispatcher(Board board, City city) : Player(board, city){}

            Player& fly_direct(City city);

    };
}