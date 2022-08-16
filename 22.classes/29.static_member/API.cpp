#include "API.hpp"

API::API(){}
API::~API(){}

//we cannot use member variables which are static inside this(static) function and vice versa
int API::GetMajorVersion(){
    return MAJOR;
}

int API::MAJOR = 7;