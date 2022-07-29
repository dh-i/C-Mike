#include <iostream>
#include <functional>

typedef int (*PFnIntOp)(int, int);

int add(int x, int y){
    return x+y;
}

int multiply(int x, int y){
    return x*y;
}

int main(){
    //functional pointer for functions : int name(int, int)
    //int (*op) (int, int);
    //PFnIntOp op;
    std::function<int(int,int)> op;

    std::cout << "Enter 1 for addition and 2 for multiplication" << std::endl;

    int n;
    std::cin >> n;

    if(n == 1) {
        op = add;
    }else{
        op = multiply;
    }

    int x,y;
    std::cout << "Enter the numbers to do the operation" << std::endl;
    std::cin >> x;
    std::cin >> y;

    std::cout << "Operation result : " << op(x, y) << std::endl;

    return 0;
}