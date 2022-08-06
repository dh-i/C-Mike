#include <iostream>

// The virtual keyword creates a vtable when we use a pointer to create the class

class Base{
    public:
        Base(){
            std::cout << "Base Constructor called " << std::endl;
            baseData = new int[10];
        }
        virtual ~Base(){
            std::cout << "Base Destructor called " << std::endl;
            delete[] baseData;
        }
        virtual void MemberFunc(){
            std::cout << "Member(Base) function called" << std::endl;
        }

        int* baseData;
};

class Derived : public Base{
    public:
        Derived(){
            std::cout << "Derived Constructor called " << std::endl;
            derivedData = new int[10];
        }
        ~Derived(){
            std::cout << "Derived Destructor called " << std::endl;
            delete[] derivedData;
        }
        virtual void MemberFunc()override{
            std::cout << "Member(Derived) function called" << std::endl;
        }
        int* derivedData;
};

int main(){
    Base* instance = new Derived;
    instance->MemberFunc();
    instance->Base::MemberFunc();
    delete instance;
}