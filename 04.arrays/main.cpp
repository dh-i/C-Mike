#include <iostream>
#include <numeric>
#include <iterator>
#include <array>

int main(){
    //Raw array
    // int ids[100];
    //stl array
    std::array<int, 100> ids;
    std::array<int, 5> weekdays;

    //using iota to assign values to an array
    std::iota(std::begin(weekdays), std::end(weekdays), 1);

    //assing ids the values
    for(int i=0; i<100; i++){
        // ids[i]= i;
        ids.at(i) = i; //we get this method with std::array
    }
    
    //print ids
    for(int i=0; i<100; i++){
        std::cout << ids[i] <<std::endl;
    }

    //iterating over the assignment done using iota and print the values
    for(int i=0; i<5; i++){
        std::cout << weekdays.at(i) <<std::endl;
    }
    return 0;
}