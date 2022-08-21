#include <iostream>
#include <memory>
//https://en.cppreference.com/w/cpp/memory/unique_ptr
//https://en.cppreference.com/w/cpp/memory/default_delete

struct IntDeleter{
    void Operator()(int* int_ptr){
        std::cout << "IntDeleter called" << std::endl;
        delete int_ptr;
    }
};

int main(){
    std::unique_ptr<int, IntDeleter> my_ptr(new int);

    return 0;
}