#include <iostream>
#include <vector>
#include <algorithm>

void PassByValue(std::vector<int> arg) {
    arg[0] = 9999;
}

void PassByReference(std::vector<int>& alias) {
    alias[0] = 9999;
}

int main(){
    std::vector<int> x(1000);
    // x.reserve(1000);
    std::fill(std::begin(x), std::end(x), 1);

    //run command with time ./main
    // PassByValue(x);
    PassByReference(x);
    std::cout << x[0] << std::endl;
    return 0;
}