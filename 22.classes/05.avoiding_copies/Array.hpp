#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <vector>

class Array{
    public:
        Array();
        ~Array();
        Array(const Array& rhs);
        Array& operator = (const Array& rhs);
        void SetData(int index, int value);
        void PrintArray();

        //to avoid pass by value, we can move the copy operator to private.
        //or we can mark the copy operator as  Array(const Array& rhs)=delete;
    private:
        std::vector<int> data;
};

#endif 