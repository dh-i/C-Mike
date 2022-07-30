#include <iostream>
#include <string>

int main(){
    // Construct a new string. This uses copy constructor
    // We have an 'rvalue' on the right, and that will be 
    // copied into 'myString' using the copy constructor
    std::string myString = "Copy construct me";
    std::string newValue;

    std::cout << "myString : " << myString << std::endl;
    std::cout << "newValue : " << newValue << std::endl;

    //std::move allows us to 'adopt' or 'steal' the value
    // newValue = std::move(myString);
    
    //Could more explicitly call the static cast here to move
    //the value of myString into newValue
    newValue = static_cast<std::string&&>(myString);
    
    //Note here, myString is still some 'valid' value.
    //Maybe it stores 'nullptr' in the data in the string.
    //but it still exists.
    std::cout << "myString : " << myString << std::endl;
    std::cout << "newValue : " << newValue << std::endl;
    
    return 0;
}