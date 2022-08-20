#include <iostream>

template<typename T, int Size>
class Container{
    public:
        Container(){
            m_data = new T[Size];
        }
        ~Container(){
            delete[] m_data;
        }

        static T m_variable;

    private:
        T* m_data;
};

//Static member variable, telling the compiler
//'hey we exist'
template<typename T, int Size>
T Container<T, Size>::m_variable;

int main(){
    Container<int, 5> c1;
    Container<int, 7> c2;
    Container<int, 5>::m_variable = 7;
    Container<int, 7>::m_variable = 147;

    std::cout << Container<int, 7>::m_variable << std::endl;
    std::cout << Container<int, 5>::m_variable << std::endl;

    return 0;
}