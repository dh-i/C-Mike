#include <iostream>

class Base{
    public:
        Base(){
            std::cout << "Base Constructor called " << std::endl;
        }
        virtual ~Base(){
            std::cout << "Base Destructor called " << std::endl;
        }
        virtual void MemberFunc(){
            std::cout << "Member(Base) function called" << std::endl;
        }
};

class Derived : public Base{
    public:
        Derived(){
            std::cout << "Derived Constructor called " << std::endl;
        }
        ~Derived(){
            std::cout << "Derived Destructor called " << std::endl;
        }
        virtual void MemberFunc()override{
            std::cout << "Member(Derived) function called" << std::endl;
        }
};

int main(){
    Base* instance = new Derived;
    instance->MemberFunc();
    instance->Base::MemberFunc();
    delete instance;
}