
#include "Board.hpp"
using namespace std;
using namespace pandemic;

void Board::remove_cures(){
    
}

bool Board::is_clean(){
    return true;
}

//void Board::operator=(int n){

//}

int& Board::operator[](City city){
    return Board::deases_level[city];
}

ostream& pandemic::operator<<(ostream& output, const Board& board){
    return output;
}

