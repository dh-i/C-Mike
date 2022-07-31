#include "Student.hpp"
#include <iostream>

Student::Student(){
    m_name = "no name";
    std::cout << "Constructor called for Student" << std::endl;
}

Student::Student(std::string name){
    m_name = name;
    std::cout << "Constructor called for Student" << std::endl;
}

Student::~Student(){
    std::cout << "Destructor called for Student with m_name " << m_name << std::endl;
}

void Student::printName(){
    std::cout << "Mname of the student is " << m_name << std::endl;
}