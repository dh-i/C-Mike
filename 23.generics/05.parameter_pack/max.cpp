#include <iostream>

template<typename T>
T Max(T arg){
    return arg;
}

template<typename T, typename... Args>
T Max(T firstValue, Args... args){
   auto nextValue = Max(args...);
   return firstValue > nextValue ? firstValue : nextValue; 
}

int main(){
    std::cout << Max(1.7,2,3,4) << std::endl;

    std::cout << Max<double,double>(1,2,3.2,6.7,4,5) << std::endl;
    return 0;
}