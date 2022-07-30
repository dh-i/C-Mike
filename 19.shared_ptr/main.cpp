#include <iostream>
#include <memory>

class UDT{
    public:
        UDT(){ std::cout << "UDT Created" << std::endl;}
        ~UDT(){ std::cout << "UDT Destroyed" << std::endl;}
};

int main(){
    {
        std::shared_ptr<UDT> ptr1 = std::make_shared<UDT>();
        {
            std::shared_ptr<UDT> ptr2 = ptr1;

            std::cout << "use count = " << ptr2.use_count() << std::endl;
        }
            std::cout << "use count = " << ptr1.use_count() << std::endl;
    }
    std::cout << "We should see the destructor call before this line";

    //reference count is thread safe

    return 0;
}