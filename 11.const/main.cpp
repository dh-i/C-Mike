#include <iostream>
#include <type_traits>

int main(){
    const int x = 42;
    std::cout << "X : " << x << std::endl;
    std::cout << std::is_const_v<int> << std::endl;
    std::cout << std::is_const_v<const int> << std::endl;

    //below both are the same
    std::cout << std::is_const_v<decltype(x)> << std::endl;
    std::cout << std::is_const<decltype(x)>::value << std::endl;

    return 0;
}