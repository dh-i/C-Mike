#include <iostream>
#include <initializer_list>

struct UDT{
    UDT(int a, int b, int c) {
        std::cout << "constructor with 3 params called " << std::endl;
        std::cout << a << " " << b << " " << c << std::endl;
    }
    
    UDT(std::initializer_list<int> data) : m_data(data) {
        std::cout << "initializer list constructor called " << std::endl;
    }

    ~UDT(){}

    void PrintData(){
        for(auto& e : m_data){
            std::cout << e << ",";
        }
        std::cout << std::endl;
    }

    private:
        std::initializer_list<int> m_data;
};


int main(){
    //The list initializer syntax avoids type conversions - {}
    UDT u{1,2,3};

    int x{1};

    u.PrintData();

    return 0;
}