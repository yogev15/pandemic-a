
#include "Board.hpp"
using namespace std;
using namespace pandemic;


bool Board::is_clean(){
    return true;
}

void Board::operator=(int n){

}

Board& Board::operator[](City city){
    return *this;
}

const Board Board::operator[](City city) const{
    return *this;
}

ostream& pandemic::operator<<(ostream& output, const Board& board){
    return output;
}

