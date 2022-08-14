#include <iostream>
#include <string>

struct Entity{
    Entity() : name{}, x{0}, y{0}, collection{nullptr} {
        init();
    }
    
    Entity(std::string _name) : Entity() {
        name = _name;
    }

    Entity(int _x, int _y): Entity() {
        x = _x;
        y = _y;
    }

    void init(){
        x = 20;
        y = 17;
        collection = nullptr;
        name = "Mike";
    }

    std::string name;
    int x{0};
    int y{0};
    int* collection{nullptr};
};

int main(){

    // Entity e{"Mike Shah"};
    Entity e{100, 220};

    std::cout << e.name << std::endl;
    std::cout << e.x << std::endl;
    std::cout << e.y << std::endl;
    std::cout << e.collection << std::endl;

    return 0;
}