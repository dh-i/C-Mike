#ifndef INTARRAY_HPP
#define INTARRAY_HPP

#include <string>

class IntArray{
    public:
        //The Big 3
            // (1) Constructor
            IntArray(std::string name);
            // (2) Destructor
            ~IntArray();
            // (3) Copy constructor
            IntArray(const IntArray& rhs);
            // Copy assignment
            IntArray& operator=(const IntArray& rhs);
        //The other 2 (in total, making the Big 5)
            // Move constructor policy
            IntArray(IntArray&& source);
            // Move assignment operator policy
            IntArray& operator=(IntArray&& source);

            std::string printName();
    private:
        std::string m_name;
        int* m_data;
};

#endif