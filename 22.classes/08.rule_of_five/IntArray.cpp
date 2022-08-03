#include <iostream>
#include <string>

#include "IntArray.hpp"

//constructor
IntArray::IntArray(std::string name): m_name(name), m_data(new int[10]){
    std::cout << m_name << " was constructed" << std::endl;
}

//Destructor
IntArray::~IntArray(){
    std::cout << m_name << " was destructed" << std::endl;
    delete[] m_data;
}

//copy constructor policy
IntArray::IntArray(const IntArray& rhs){
    m_name = rhs.m_name + "(copy)";
    std::cout << m_name << " was copy constructed from: " << rhs.m_name << std::endl;
    m_data = new int[10];
    for(int i=0; i<10; i++){
        m_data[i] = rhs.m_data[i];
    }
}

//copy assignment operator policy
IntArray& IntArray::operator=(const IntArray& rhs){
   m_name = rhs.m_name;
    std::cout << " was copy assigned from: " << rhs.m_name << std::endl;
    if(this != &rhs){
        m_data = new int[10];
        for(int i=0; i<10; i++){
            m_data[i] = rhs.m_data[i];
        } 
    }
    return *this;
}

//move constructor
IntArray::IntArray(IntArray&& source){
    m_name = source.m_name;
    source.m_name = "";
    m_data = source.m_data;
    source.m_data = nullptr;
    std::cout << m_name << " was move constructed" << std::endl;
}

//move assignment operator
IntArray& IntArray::operator=(IntArray&& source){
    if(this != &source){
        m_name = source.m_name;
        source.m_name = "";
        m_data = source.m_data;
        source.m_data = nullptr;
        std::cout << m_name << " used move assignment" << std::endl;
    }
    return *this;
}

std::string IntArray::printName(){
    return m_name;
}