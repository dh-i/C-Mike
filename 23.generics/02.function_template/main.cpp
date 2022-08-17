#include <iostream>

//https://en.cppreference.com/w/cpp/language/function_template
//we can also use class instead of keyword classname


//In cpp 20 there is auto keyword which can be used similar to generics
//Abreviated function template

//works only in cpp 20
// auto square2(auto input){
//     return input*input;
// }

template <class T>
T square(T input){
    return input * input;
}

int main(){

    std::cout << square(5) << std::endl;    
    std::cout << square<float>(5.5f) << std::endl;    

    return 0;
}