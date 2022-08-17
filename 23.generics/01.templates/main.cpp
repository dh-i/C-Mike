#include <iostream>

//To avoid method overloading we can use Templates in c++ , which is similar to generics in other languages
//try the below code in https://cppinsights.io/

template <typename T>
T square(T input){
    return input*input;
}

int main(){

    std::cout << square(5) << std::endl;
    std::cout << square<double>(5.5) << std::endl;
    std::cout << square<float>(6.5f) << std::endl;

    return 0;
}