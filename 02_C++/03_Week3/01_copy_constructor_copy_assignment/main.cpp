#include <iostream>
#include <new>

class Data
{
private:

public:
    int* ptr;
    int num;

    explicit Data(){}

    Data(int* ptr , int num) : ptr(ptr) , num(num) {}

    // copy constructor 
    Data(const Data& other)
    {
        std::cout<<"copy constructor "<<std::endl;
        this->ptr = new int(*other.ptr);
        this->num = other.num;
    }

    // copy assignment
    Data& operator=(const Data& other)
    {
        if(this != &other)
        {
            if(this->ptr)
            {
                delete ptr;
            }
            this->ptr = new int(*other.ptr);
            this->num = other.num;
        }
        return *this;
    }

    void print(void)
    {
        std::cout<<"*ptr = "<<*this->ptr<<" , num = "<<this->num<<std::endl;
    }

    ~Data()
    {
        if(this->ptr)
        {
            delete ptr;
            ptr = nullptr;
        }
    }

};

int main(int argc, const char** argv)
{
    Data d1(new int(5),10);
    d1.print();
    Data d2 = d1; // copy constructor because d2 doesn't have initialization
    d2.print();
    *d1.ptr = 20;
    Data d3(d1);     // copy constructor
    // Data d4(d4);   // Segmentation fault (core dumped)
    // d4.print();      // Segmentation fault (core dumped)
    d1.print();
    d2.print();
    d3.print();
    d2 = d3;        // copy assignation because d2 and d3 have a previous initialization
    d1.print();
    d2.print();
    d3.print();
    return 0;
}