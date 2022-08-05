#include <iostream>

class Dog{
    public:
        Dog(){}

        void Bark(){
            std::cout << "bark!" << std::endl;
        }

        void Walk(){
            x+=1;
            y+=1;
        }

        float x,y;
};

class Golden : public Dog{
    public:
        Golden(){
            m_sticksRetrieved = 0;
        }

        void Retrieve(){
            std::cout << "Retrieving a stick \n";
            m_sticksRetrieved++;
        }

        float m_sticksRetrieved;
};

class Husky : public Dog{};

int main(){
    Dog dog;
    dog.Bark();
    
    Golden dog1;
    dog1.Bark();
    dog1.Walk();
    dog1.Retrieve();

    std::cout << "Sizeof (Dog)     :" << sizeof(Dog) << std::endl;
    std::cout << "sizeof (Golden)  :" << sizeof(Golden) << std::endl;
}