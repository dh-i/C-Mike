#include <iostream>

//Note: floating comparision can be inaccurate

class Vector3f{
    public :
        Vector3f(){
            x = 0.0f;
            y = 0.0f;
            z = 0.0f;
        }

        Vector3f operator+(const Vector3f& rhs) const {
            Vector3f result;
            result.x = x + rhs.x;
            result.y = y + rhs.y;
            result.z = z + rhs.z;

            return result;
        }

        Vector3f operator++(){
            x = x+1;
            y = y+1;
            z = z+1;
            return *this;
        }

        bool operator==(const Vector3f& rhs){
            std::cout << std::endl << "Class function ==" << std::endl;
            if(x == rhs.x && y == rhs.y && z == rhs.z){
                return true;
            }
            return false;
        }

        friend std::ostream& operator<<(std::ostream& os, const Vector3f& obj){
            os << obj.x << " " << obj.y << " " << obj.z;
            return os;
        }

    public:
        float x,y,z;
};

bool operator==(const Vector3f& lhs, const Vector3f& rhs){
    std::cout << std::endl << "free function ==" << std::endl;
    if(lhs.x == rhs.x && lhs.y == rhs.y && lhs.z == rhs.z){
        return true;
    }
    return false;
}

int main(){
    Vector3f myVec;
    Vector3f myVec1;
    myVec1.x = 2.0f;
    myVec1.y = 5.0f;
    myVec1.z = 8.0f;

    Vector3f myVec2;
    myVec2.x = 3.0f;
    myVec2.y = 5.0f;
    myVec2.z = 8.0f;

    Vector3f myVec3;
    myVec3.x = 3.0f;
    myVec3.y = 5.0f;
    myVec3.z = 8.0f;

    std::cout << "myVec1 == myVec2 - "<< (myVec1 == myVec2) << std::endl;
    std::cout << "myVec2 == myVec3 - "<< (myVec2 == myVec3) << std::endl;

    myVec = myVec + myVec1;

    std::cout << myVec.x << " " << myVec.y << " " << myVec.z << std::endl;

    ++myVec;

    std::cout << myVec << std::endl;

}