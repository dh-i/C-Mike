#include <iostream>
#include <array>
#include <vector>

void PrintArray(std::array<int,5>& arr, size_t size){
    for(int i=0; i<size; i++){
        std::cout << arr[i] << std::endl;
    }
}

void PrintVector(std::vector<int>& vec){
    for(int i=0; i < vec.size(); i++){
        std::cout << vec[i] << std::endl;
    }
}

int main(){
    std::array<int, 5> arr = {1,2,3,4,5};
    std::vector<int> myVec = {11,12,13,14};

    PrintArray(arr, 5);

    std::cout << std::endl;

    std::cout << std::endl;

    PrintVector(myVec);
    return 0;
}