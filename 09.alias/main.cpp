#include <iostream>
#include <typeinfo>


int main(){
     int x = 42;
     //"int&" is the full type, for a reference type - Like an alias
     int& ref = x;

     //this is illegal - we can see that using -Wall flag
     int* y = nullptr;
     //we cannot have the value of something that we are dereferencing that is a null as below
     int*& ref2 = y;

     std::cout << "x value : " << x << std::endl;
     std::cout << "The type of x is : " << typeid(x).name() << std::endl;
     std::cout << "x address value : " << &x << std::endl;
     std::cout << "ref value : " << ref << std::endl;
     std::cout << "The type of ref is : " << typeid(ref).name() << std::endl;
     std::cout << "ref address value : " << &ref << std::endl;


     ref = 43;

     std::cout << "x value : " << x << std::endl;
     std::cout << "The type of x is : " << typeid(x).name() << std::endl;
     std::cout << "x address value : " << &x << std::endl;
     std::cout << "ref value : " << ref << std::endl;
     std::cout << "The type of ref is : " << typeid(ref).name() << std::endl;
     std::cout << "ref address value : " << &ref << std::endl;
}