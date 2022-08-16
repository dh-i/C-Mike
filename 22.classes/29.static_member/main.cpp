#include <iostream>
#include "API.hpp"

int main(){
    //watch this lesson again classes part 32 - static memeber variables

    std::cout << API::MAJOR << std::endl;
    std::cout << API::GetMajorVersion() << std::endl;

    return 0;
}