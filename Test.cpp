#include "Board.hpp"
#include "Player.hpp"
#include "doctest.h"
#include "City.hpp"
#include "OperationsExpert.hpp"
#include "Scientist.hpp"
#include "Medic.hpp"
#include "GeneSplicer.hpp"

using namespace std;
using namespace pandemic;

TEST_CASE("Board"){

    Board board;

    CHECK(board.is_clean() == true);

    board[City::Atlanta] = 4;
    board[City::LosAngeles] = 3; 
    board[City::Shanghai] = 1;
    board[City::SaoPaulo] = 2;

    CHECK(board[City::Atlanta] == 4);
    CHECK(board[City::LosAngeles] == 3);
    CHECK(board[City::Shanghai] == 1);
    CHECK(board[City::SaoPaulo] == 2);

    CHECK(board.is_clean() == false);
    
}

TEST_CASE("Drive"){

    Board board;

    OperationsExpert player1(board, City::NewYork);
    GeneSplicer player2(board, City::Baghdad);
    Medic player3(board, City::HongKong);
    Scientist player4(board, City::Sydney, 4);

    CHECK_NOTHROW(player1.drive(City::London));
    CHECK_NOTHROW(player2.drive(City::Istanbul));
    CHECK_NOTHROW(player3.drive(City::Shanghai));
    CHECK_NOTHROW(player4.drive(City::LosAngeles));
    
    CHECK_THROWS(player1.drive(City::Bogota));
    CHECK_THROWS(player2.drive(City::Delhi));  
    CHECK_THROWS(player3.drive(City::Riyadh));
    CHECK_THROWS(player4.drive(City::NewYork));

    
}

TEST_CASE("Drive"){

    Board board;

    OperationsExpert player1(board, City::NewYork);
    GeneSplicer player2(board, City::Baghdad);
    Medic player3(board, City::HongKong);
    Scientist player4(board, City::Sydney, 4);

    CHECK_NOTHROW(player1.fly_direct(City::Bangkok));
    CHECK_NOTHROW(player2.fly_charter(City::HoChiMinhCity));
    CHECK_NOTHROW(player3.fly_shuttle(City::Santiago));
    CHECK_NOTHROW(player4.fly_direct(City::Tokyo));
    
    CHECK_THROWS(player1.fly_shuttle(City::Johannesburg));
    CHECK_THROWS(player2.drive(City::Karachi));  
    CHECK_THROWS(player3.drive(City::Lima));
    CHECK_THROWS(player4.drive(City::Essen));

}

TEST_CASE("Build"){

    Board board;

    OperationsExpert player1(board, City::NewYork);
    GeneSplicer player2(board, City::Baghdad);
    Medic player3(board, City::HongKong);
    Scientist player4(board, City::Sydney, 4);

    CHECK_NOTHROW(player1.build());
    CHECK_NOTHROW(player2.build());
    CHECK_NOTHROW(player3.build());
    CHECK_NOTHROW(player4.build());
        
}