#include <iostream>
#include <string>

class TopLevelClass{
    public:
        TopLevelClass(std::string arg){
            std::cout << "TopLevelClass constructor called " << std::endl;
        }
};

class EntityBase : public TopLevelClass{
    public:
        EntityBase() : TopLevelClass("arg"){
            std::cout << "EntityBase Constructor" << std::endl;
        }

        EntityBase(std::string name) : TopLevelClass("arg") , m_name(name){
            std::cout << "Entity Base(name) constructor called" << std::endl;
        }

        ~EntityBase(){
            std::cout << "Entity Base destructor called" << std::endl;
        }

    private:
        std::string m_name;
};

class Car : public EntityBase{
    public:
        Car() : EntityBase("Default"){
            std::cout << "Monster Constructor" << std::endl;
        }
        ~Car() {
            std::cout << "Monster Destructor" << std::endl;
        }
};

int main(){
    Car oneCar;
}