#include <iostream>
#include <string>

class Udt{
    public:
        explicit Udt(int);

    private:
        int m_variable;
};

Udt::Udt(int i){
    m_variable = i;

    std::cout << "m_variable: " << m_variable << std::endl;
}

int main(){
    //works even if it is marked explicit
    // Udt ul(500.1234f);

    //Doesn't work when marked explicit
    Udt ul{500.1234f};

    //this doesn't work but worked for mike
    // Udt ul = 500;

    return 0;
}