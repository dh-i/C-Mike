//https://en.cppreference.com/w/cpp/language/template_specialization

#include <iostream>
#include <cmath>

template <typename T>
bool equal(T a, T b){
    return (a==b);
}

template<>
bool equal<float>(float a, float b){
    std::cout << "equal<float>" << std::endl;
    return fabs(a-b) < 0.00001f;
}

template<>
bool equal<double>(double a, double b){
    std::cout << "equal<double>" << std::endl;
    return fabs(a-b) < 0.0000001f;
}

int main(){
    std::cout << equal<int>(2,2) << std::endl;
    std::cout << equal<int>(2,3) << std::endl;
    std::cout << equal<float>(1.0f-0.999999f, 0.000001f) << std::endl;
    std::cout << equal<float>(1.0f,-2.0f) << std::endl;
    std::cout << equal<float>(1.0-0.9999999999,0.0000000001) << std::endl;
}