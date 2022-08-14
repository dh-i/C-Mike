#include <iostream>
#include <string>

struct Entity{
    Entity(): name{} , x{}, y{}, collection{} {}

    std::string name;
    int x{1};
    int y{2};
    int* collection{nullptr};
};


int main(){
    Entity e{};
    std::cout << e.name << std::endl;
    std::cout << e.x << std::endl;
    std::cout << e.y << std::endl;
    std::cout << e.collection << std::endl;
}