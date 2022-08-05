#include <iostream>

class Base{
    public:
        Base(){
            std::cout << "Base Constructor" << std::endl;
        }
        ~Base(){
            std::cout << "Base Destructor" << std::endl;
        }

    public:
        int m_base_public_member_variable;

    protected:
        int m_base_protected_member_variable;
    private:
        int m_base_private_member_variable;
};

class Derived : public Base{
    public:
        Derived(){
            std::cout << "Derived Constructor" << std::endl;

            m_base_public_member_variable = 10;
            m_base_protected_member_variable = 20;
            
            //This throws error
            // m_base_private_member_variable = 30;
        }
        ~Derived(){
            std::cout << "Derived Destructor" << std::endl;
        }
};

int main(){
    Derived d;

    return 0;
}