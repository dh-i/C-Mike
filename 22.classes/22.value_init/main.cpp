#include <iostream>

struct vec3{
    float x,y,z;
};

struct Entity{
    // Entity() = default;

    Entity(): name("mike"), x(1), y(2), collection(nullptr) {}

    std::string name;
    int x;
    int y;
    int* collection;
};

int main(){
    vec3 v{};
    std::cout << v.x << std::endl;
    std::cout << v.y << std::endl;
    std::cout << v.z << std::endl;

    Entity e{};

    std::cout << e.x << std::endl;
    std::cout << e.y << std::endl;
    std::cout << e.collection << std::endl;
    std::cout << e.name << std::endl;

    return 0;
}