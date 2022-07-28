#include <iostream>

//in c++ function arguments are pass by value like in c.

void SetValue(int arg) {
    arg = 999;
}


int main(){
    int x = 42; 
    std::cout << "The value of x is : " << x << std::endl;

    SetValue(x);
    
    std::cout << "The value of x is : " << x << std::endl;
}