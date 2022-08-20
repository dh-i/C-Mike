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
    private:
        T* m_data;
};

int main(){
    Container<int, 5> c;
    Container<double, 3> c2;
    Container<float, 2> c3;

    return 0;
}