#include <iostream>
#include <typeinfo>

template <typename T1, size_t N>
void foo(T1 input1){
    for(size_t i=0; i < N; i++){
        std::cout << typeid(input1).name() << std::endl;
    }
}

int main(){
    
    foo<int, 3>(5);
    foo<float, 4>(5.23);
    foo<int, 5>(5);

}