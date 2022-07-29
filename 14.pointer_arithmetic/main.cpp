#include <iostream>


int main(){
    int array[] = {1,2,3,4};
    // int* array = new int[4];
    // array[0] = 1;
    // array[1] = 2;
    // array[2] = 3;
    // array[3] = 4;
    
    int* px = array;

    std::cout << array[0] << std::endl;
    std::cout << std::endl;
    std::cout << sizeof(px) << std::endl;
    std::cout << std::endl;

    for(int i=0; i < (sizeof(array)/sizeof(int)); i++){
        //we can use *(array+i) as well
        std::cout << *(px + i) << std::endl;
    }

    std::cout << std::endl;

    for(int i=0; i < (sizeof(array)/sizeof(int)); i++){
        std::cout << array[i] << std::endl;
    }

    return 0;
}