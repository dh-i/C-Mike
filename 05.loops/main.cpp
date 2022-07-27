#include <iostream>
#include <array>
#include <algorithm>

int main(){
    int arr[] = {1,2,3};
    std::array<int , 3> arr1{4,5,6};
    std::array<int, 3> arr2{8,9,10};

    std::cout << "arr" <<std::endl;
    for(int element : arr){
        std::cout << element << std::endl;
    } 

    std::cout << "arr1" <<std::endl;
    int i=0;
    for(;i<arr1.size();){
        std::cout << arr1[i] << std::endl;
        i++;
    }

    std::cout << "arr2" <<std::endl;
    int j=0;
    for(;j<arr2.size();j++){
        std::cout << arr2[j] << std::endl;
    }

    int countdown = 3;
    std::cout << "Countdown" << std::endl;
    while(countdown>0){
        std::cout << countdown << std::endl;
        countdown--;
    }

    //there is also do while similar to while

    //using fill from algorithm package to fill the array
    std::array<int, 4> myArray;

    std::fill(std::begin(myArray), std::end(myArray), 2);
    std::cout << "Printing fill" << std::endl;
    //auto will determine the data type by auto
    //using auto& will avoid copying the elements to memory
    for(auto element : myArray){
        std::cout << element <<std::endl;
    }

    //continue and break works as in other languages


    return 0;
}