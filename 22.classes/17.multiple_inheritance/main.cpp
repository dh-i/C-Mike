#include <iostream>

struct noncopyable{
    noncopyable()=default;
    noncopyable(const noncopyable& rhs)=delete;
    noncopyable& operator = (const noncopyable& rhs) = delete;
};

struct Dog : public noncopyable{
    virtual void Bark(){
        std::cout << "Dog::Bark\n";
    }
};

struct Golden : public Dog {
    virtual void Bark(){
        std::cout << "Golden::Bark\n";
    }
};

struct BorderCollie : public Dog {
    virtual void Bark(){
        std::cout << "BorderCollie::Bark\n";
    }
};

struct Coltriever : public Golden, BorderCollie {
    virtual void Bark(){
        std::cout << "Colotriever::Bark\n";
    }
};

int main(){
    Dog newDog;
    //this doesn't work
    // Dog newDog1 = newDog;
    // copy constructor of 'Dog' is implicitly deleted because base class 'noncopyable' has a deleted copy constructor

    Dog* dog = new Dog;
    Dog* golden = new Golden;
    Dog* borderCollie = new BorderCollie;
    Coltriever* coltriever = new Coltriever;

    dog->Bark();
    golden->Bark();
    borderCollie->Bark();
    coltriever->Bark();
    dog = golden;
}