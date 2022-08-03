#include <iostream>
#include <string>
#include <vector>
#include "IntArray.hpp"

//copy constructor gets called when the below function is invoked
void foo(IntArray& temp){
    std::cout << temp.printName() << std::endl;
}

void bar(int a){
    std::cout << a << std::endl;
}

int main(){

    IntArray array1("array1");
    foo(array1);

    std::vector<IntArray> myArray;
    myArray.reserve(10);

    for(int i=0; i<10; i++){
        IntArray temp(std::to_string(i));
        //copy constructed
        //myArray.push_back(temp);

        //move constructed
        myArray.push_back(std::move(temp));
    }

    return 0;
}