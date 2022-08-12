#include <iostream>

struct Entity{
    int x{4}, y{5};
};

struct Warrior : virtual public Entity{
    int power{10};
};

struct Goblin : virtual public Entity{
    int power{20};
};

//Virutal inheritance of Warrrior and Goblin doesn't work as they are two different classes
struct Player : virtual public Warrior, virtual public Goblin{

};

int main(){
    Player mike;

    std::cout << mike.x << std::endl;
    std::cout << mike.y << std::endl;

    std::cout << mike.Goblin::power << std::endl;
    std::cout << mike.Warrior::power << std::endl;
}