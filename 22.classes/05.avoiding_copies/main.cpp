#include <iostream>
#include "Array.hpp"

void printAnArray(Array a){

}

int main(){
    Array myArray;
    myArray.SetData(0, 1234567);

    Array myArray2;
    myArray2 = myArray;

    myArray.PrintArray();
    std::cout << std::endl;
    myArray2.PrintArray();

    for(int i=0; i < 10; i++){
        printAnArray(myArray);
    }
}