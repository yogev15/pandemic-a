#pragma once
#include <iostream>
#include <unordered_map>
#include "City.hpp"

namespace pandemic{
    
    class Board{

        private:

            std::unordered_map<City, City> niegbouhrs; 
            std::unordered_map<City, int> deases_level;
            std::unordered_map<City, bool> reasearch_stations;
                

        public:
            Board(){}

            static bool is_clean();

            void remove_cures();

            //void operator=(int n);

            int& operator[](City city);

            friend std::ostream& operator<<(std::ostream& output, const Board& board);
    };
	
};
