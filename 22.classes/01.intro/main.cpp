//everything in class in c++ is by default private
//struct is similar to class but everything in it is by default public
#include "Student.hpp"

int main(){
    Student mike;
    mike.m_name = "Mike Shah";
    mike.printName();

    Student sue;
    sue.m_name = "Suezane";
    sue.printName();

    return 0;
}