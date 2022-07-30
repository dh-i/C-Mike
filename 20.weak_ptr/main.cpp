#include <iostream>

class UDT{
    public:
        UDT(){ std::cout << "UDT Created" << std::endl;}
        ~UDT(){ std::cout << "UDT Destroyed" << std::endl;}
};

int main(){
    std::weak_ptr<UDT> ptr2;
    {
        //creating our shared pointer
        std::shared_ptr<UDT> ptr1 = std::make_shared<UDT>();
        {
            ptr2 = ptr1;
            std::cout << "(inside scope) use count = " << ptr2.use_count() << std::endl;
        } //ptr2 is freed
        //Then we check our updated reference count
        std::cout << "use count  = " << ptr1.use_count() << std::endl;
    }
    std::cout << "Is weak_ptr (object that it point to) valid: " << ptr2.expired() << std::endl;

    std::cout << "We should see the destructor call before this line\n";

    return 0;
}