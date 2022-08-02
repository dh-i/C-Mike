#include <iostream>
#include "Vector3f.hpp"

std::ostream& operator<<(std::ostream& os, const Vector3f& obj){
    os << obj.x << " " << obj.y << " " << obj.z;

    return os;
}

int main(){
    Vector3f myVec;
    
    std::cout << myVec << std::endl;

    return 0;
}

