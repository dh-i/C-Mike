#include <iostream>
// https://en.cppreference.com/w/cpp/language/parameter_pack

template<typename T>
T Sum(T arg){
    return arg;
}

template<typename T, typename... Args>
T Sum(T start, Args... args){
    return start + Sum(args...);
}

int main(){
    std::cout << Sum(1.7,2,3,4) << std::endl;

    std::cout << Sum<double, double>(1,2,3.2,4,5) << std::endl;
    return 0;
}