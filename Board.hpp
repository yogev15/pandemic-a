#pragma once
#include <iostream>
#include <unordered_map>
#include "City.hpp"

namespace pandemic{
    
    class Board{

        private:

            std::unordered_map<City, int> deases_level;
            std::unordered_map<City, City> niegbouhrs; 
                

        public:
            Board(){}

            bool is_clean();

            void operator=(int num);

            Board& operator[](City city);

            const Board operator[](City city) const;

            friend std::ostream& operator<<(std::ostream& output, const Board& board);
    };
	
};