#include <iostream>
#include "Array.hpp"

Array::Array(){
    std::cout << "Constructor called " << std::endl;

    for(int i = 0; i<10; i++){
        data.push_back(i);
    }
}

Array::~Array(){
}


Array::Array(const Array& rhs){
    std::cout << "Copy constructor called " << std::endl;
    for(int i=0; i<10; i++){
        data.push_back(rhs.data[i]);
    }
}

Array& Array::operator = (const Array& rhs){
            if(&rhs == this){
                return *this;
            }
            data.clear();
            std::cout << std::endl << "assignment operator" << std::endl;
            
            for(int i=0; i<10;i++){
               data.push_back(rhs.data[i]);
            }
            return *this;
}


void Array::PrintArray(){
    for(int i=0; i<data.size();i++){
        std::cout << data[i] << std::endl; 
    }
}

void Array::SetData(int index, int value){
    data[index] = value;
}