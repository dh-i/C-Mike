#include <iostream>

void foo(){
    //this will be part of the context and not stack or heap memory
    static int s_variable = 0;
    s_variable += 1;

    std::cout << s_variable << std::endl;
}

int main(){
    for(int i=0; i<10; i++){
        foo();
    }
}