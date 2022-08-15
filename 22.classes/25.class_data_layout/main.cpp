#include <iostream>
#include <string>

struct GameState{
    //the order in which we define the data types will contribute to the total size of struct
    //we should declare larger sized data first to avoid unnecessary padding
    double score;
    short numberofPlayers;
    bool checkpoint;
    bool checkpoint1;
    bool checkpoint2;
    bool checkpoint3;
};

int main(){

    GameState gs;

    std::cout << alignof(gs) << std::endl << std::endl;

    std::cout << sizeof(gs.score) << std::endl;
    std::cout << sizeof(gs.numberofPlayers) << std::endl;
    std::cout << sizeof(gs.checkpoint) << std::endl;
    std::cout << sizeof(gs) << std::endl;
}