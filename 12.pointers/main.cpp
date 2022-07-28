#include <iostream>

int main(){
    int x = 7;
    int* px = &x;
    int* px2 = &x;

    //Update the value of x
    x = 9;

    std::cout << "The value stored in x is " << x << std::endl;
    std::cout << "The address where x is stored is " << &x << std::endl;
    std::cout << "The value stored in px is " << px << std::endl;
    std::cout << "The value of px dereferenced is " << *px << std::endl;
    std::cout << "The value stored in x is " << px2 << std::endl;
    std::cout << "The value of px2 dereferenced is " << *px2 << std::endl;

    *px2 = 42;

    
    std::cout << "The value stored in x is " << x << std::endl;
    std::cout << "The address where x is stored is " << &x << std::endl;
    std::cout << "The value stored in px is " << px << std::endl;
    std::cout << "The value of px dereferenced is " << *px << std::endl;
    std::cout << "The value stored in x is " << px2 << std::endl;
    std::cout << "The value of px2 dereferenced is " << *px2 << std::endl;


    return 0;
}