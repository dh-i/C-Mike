#include <iostream>
#include <string>
int main(){
    int num1 = 12;
    long num2 = 2342342525234;
    float pi = 3.14f;
    double piDouble = 3.141526;
    int64_t num3 = 23452324241224;
    char a = 'a';
    const char* word = "abc";
    
    std::string sentence = "This is a sentence";

    std::cout << "num1 is " << num1 << std::endl; 
    std::cout << "num2 is " << num2 << std::endl; 
    std::cout << "pi is " << pi << std::endl; 
    std::cout << "piDouble is " << piDouble << std::endl; 
    std::cout << "num3 is " << num3 << std::endl; 
    std::cout << "a is " << a << std::endl; 
    std::cout << "word is " << word << std::endl; 
    std::cout << "sentence is " << sentence << std::endl; 
    std::cout << "The size of int is " << sizeof(int) << "bytes" << std::endl; 

    return 0;
}