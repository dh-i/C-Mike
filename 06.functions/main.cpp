#include <iostream>

//functions can share names, if we want the functions to work for different data types, we can use it that way

int add(int a, int b);
//the other way of doing it , auto keyword deduces the type for us
auto add(float a, float b) -> float;

void printGreet(){
    std::cout << "Hello there how you doing!" << std::endl;
}

int recursionFactorial(int n){
    //1. Base case
    if(n <= 1){
        return 1;
    }

    //2. Recursive case
    return n * recursionFactorial(n-1);
}

int main(){
    std::cout << "Adding int 6 and 5 is equal to " << add(6,5) << std::endl;

    std::cout << "Adding float 2.2 and 5.5 is equal to " << add(2.2f,5.5f) << std::endl;

    printGreet();


    //Interesting to know that recursion can lead to stack overflow

    //calling the recursion factorial fn
    std::cout << "The value of factorial 3 is " << recursionFactorial(3) << std::endl;

    return 0;
}

int add(int a, int b){
    return a+b;
}

float add(float a, float b){
    return a+b;
}