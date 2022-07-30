#include <iostream>
#include <memory>

class UDT{
    public:
        UDT(){ std::cout << "UDT Created" << std::endl;}
        ~UDT(){ std::cout << "UDT Destroyed" << std::endl;}
};

int main(){
    //creating unique ptr
    std::unique_ptr<UDT> mike = std::unique_ptr<UDT>(new UDT);

    //creating an 'array' that is pointed to, by one unique ptr
    //std::unique_ptr<UDT[]> mike_array = std::unique_ptr<UDT[]>(new UDT[10]);

    //The equivalent, to the line above is :
    std::unique_ptr<UDT[]> mike_array = std::make_unique<UDT[]>(10);

    //we cannot make a copy of unique ptr
    //this is not allowed 
    //std::unique_ptr<UDT[]> copy_mike_array = mike_array;
    
    //but we can move the array
    std::unique_ptr<UDT[]> joe_array = std::move(mike_array);

    return 0;
}