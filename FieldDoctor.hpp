#pragma once
#include "Player.hpp"
#include "City.hpp"
#include "Board.hpp"

namespace pandemic{

    //can cure his city or a nighbour city without using a build card
    class FieldDoctor : public Player{

        public:
            
            FieldDoctor(Board board, City city) : Player(board, city){}
            
            Player& discover_cure(City city);

    };
}