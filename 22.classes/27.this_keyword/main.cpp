#include <iostream>

class Person{
    public:
        Person(int age) : age(age) {
            //if we assign age = age , the parameter age takes precedence over the member variable so we can do something like below
            // sthis->age = age;
        }

        ~Person(){
            //we can do something like below but not recommended
            //delete this;
        }

        //when we mark the member function as const we can't mutate anything inside the function
        int GetAge() const {
            return this->age;
        }

        Person* GetThisAddress(){
            return this;
        }

    private:
        int age;
};

int main(){
    Person mike(500);

    std::cout << mike.GetThisAddress() << std::endl;
    std::cout << &mike << std::endl;

    Person* Rishit = new Person(700);
    std::cout << Rishit->GetThisAddress() << std::endl;
    std::cout << Rishit << std::endl;

    delete Rishit;

    return 0;
}