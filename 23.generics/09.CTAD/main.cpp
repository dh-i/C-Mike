#include <iostream>
#include <vector>

//A great book to refer - Effective c++
//use -Weffc++ flag to learn more

template<typename first, typename second>
struct Entry{
    Entry(first key, second value){
        m_key = key;
        m_value = value;
    }
    first m_key;
    second m_value;
};

int main(){
    //Class template argument deduction 
    //if the types are the same then we don't have to pass the types explicitly for the templates
    std::vector v1 {1,2,3,4,5};

    Entry entry(5,10.2f);
}