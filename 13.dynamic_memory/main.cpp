#include <iostream>

int main(){
    int numberOfStudents = 0;

    std::cout << "How many students in our class?" << std::endl;
    std::cin >> numberOfStudents;

    //this will overflow if we choose the number greater than the stack size
    // int studentIds[numberOfStudents];

    //allocating the memory dynamically
    int* studentIds = new int[numberOfStudents];

    for(int i=0; i < numberOfStudents; i++){
        studentIds[i] = i;
    }

    //we need to free the memory here if it is a single value then we can do something like
    //delete x;
    delete[] studentIds;
    return 0;
}