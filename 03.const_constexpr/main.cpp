#include <iostream>

int main(){
    const double PI = 3.141526;
    //store the value of expression to a variable as constant
    constexpr int twosquare = 2 * 2;

    std::cout << "The value of PI is " << PI << std::endl;
    std::cout << "The value of twosquare is " << twosquare << std::endl;

    //we cannot reassing for const and constexpr variable 
    // PI = 3.14; //this doesn't work

    return 0;
}