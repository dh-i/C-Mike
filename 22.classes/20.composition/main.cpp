#include <iostream>

struct Point2D{
    int x,y;
};

class Character{
    public:
        Character(Point2D& ref) : ref_home(ref){
        }
        ~Character(){ }

    private:
        //Composition
        Point2D m_position;
        Point2D m_direction;

        //Composition (aggregation) - the lifecycle of Point2D is not limited to this object
        Point2D& ref_home;
};

Point2D somePoint;

int main(){
    Character mike(somePoint);
    return 0;
}