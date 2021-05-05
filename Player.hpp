#pragma once
#include <string>
#include "City.hpp"
#include "Color.hpp"
#include "Board.hpp"

namespace pandemic
{
  class Player{
      
      private:
        Board board; 
        City city;

      public:
        Player(Board& board, City city){}

        Player& drive(City city);
        Player& fly_direct(City city);
        Player& fly_charter(City city);
        Player& fly_shuttle(City city);
        Player& build();
        Player& discover_cure(Color color);
        Player& treat(City city);

        std::string role();
        Player& take_card(City city);
  };  
}
