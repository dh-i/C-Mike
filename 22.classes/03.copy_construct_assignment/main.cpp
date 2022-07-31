#include <iostream>

class Array{
    public:
        Array(){
            data = new int[10];
            for(int i=0; i<10;i++){
                data[i] = i*i;
            }
        }

        ~Array(){
            delete[] data;
        }

        //copy constructor
        Array(const Array& rhs){
            if(data != nullptr){
                data = new int[10];
            }
            for(int i=0; i<10;i++){
                data[i] = rhs.data[i];
            }
        }

        //copy assignment operator
        Array& operator = (const Array& rhs){
            if(&rhs == this){
                return *this;
            }
            std::cout << std::endl << "assignment operator" << std::endl;
            std::cout << &rhs << std::endl;
            std::cout << this << std::endl;
            
            delete[] data;
                 data = new int[10];
            for(int i=0; i<10;i++){
                data[i] = rhs.data[i];
            }
            return *this;
        }

        void PrintingData(){
            for(int i=0; i<10;i++){
                std::cout << data[i] << std::endl; 
            }
        }

        void SetData(int index, int value){
            data[index] = value;
        }

    private:
        int* data;

};

int main(){
    Array myArray;
    Array myArray2 = myArray;
    Array myArray3;

    myArray.SetData(0, 100);
    myArray.SetData(1, 200);

    myArray3 = myArray;

    myArray.PrintingData();
    std::cout<< std::endl;
    myArray2.PrintingData();
    std::cout<< std::endl;
    myArray3.PrintingData();

    return 0;
}