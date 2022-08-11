#include <iostream>

class UserDefinedType{
    public:
        UserDefinedType(){}
        ~UserDefinedType(){}
        UserDefinedType(const UserDefinedType& rhs){}
        //copy assignment, move assignment, move constructor
        void SetValue(int newValue){
            m_value = newValue;
        }

        void ComputeValue(int a){
            m_value = a;
        }

        int Getvalue() const {
            //This cannot be done as no immutability can occur inside the member function marked const
            // ComputeValue(22);
            return m_value;
        }

        private:
            int m_value;
};

int main(){
    UserDefinedType u;
    u.SetValue(100);
    std::cout << u.Getvalue() << std::endl;
    return 0;
}