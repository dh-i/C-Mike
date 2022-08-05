#include <iostream>

class PrivateSecurityInfo{
    friend class UserDefinedType;
    
    private:
        int passcode;
};

class UserDefinedType{
    public:
        UserDefinedType(): m_privateMemberVariable(0){
            m_info.passcode = 7;
        }

    private:
        int m_privateMemberVariable;
        PrivateSecurityInfo m_info;

    friend void PrintPrivateMemeberVariableOfUDT(UserDefinedType u);
};

void PrintPrivateMemeberVariableOfUDT(UserDefinedType u){
    std::cout << "m_privateMemberVariable: " << u.m_privateMemberVariable << std::endl;
}

int main(){
    UserDefinedType instance;

    PrintPrivateMemeberVariableOfUDT(instance);
}