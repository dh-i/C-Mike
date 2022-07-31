#include "Student.hpp"

int main(){
    Student mike("Mike Shah S"); 
    mike.printName();

    Student sue;
    sue.m_name = "Suezane";
    sue.printName();

    return 0;
}