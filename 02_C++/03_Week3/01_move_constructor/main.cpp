#include <cstddef>
#include <iostream>
#include <utility>
#include <vector>


class Data
{
private:

public:
    int* ptr;
    int num;
    // std::vector<int>v;

    explicit Data(){}

    Data(int* ptr , int num) : ptr(ptr) , num(num) 
    {
        std::cout<<"param"<<std::endl;
    }

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

    Data(Data&& other)
    {
        std::cout<<"Move"<<std::endl;
        if(other.ptr)
        {
            // this->v = std::move(other.v);
            this->num = other.num;
            this->ptr = other.ptr;
            other.ptr = nullptr;
            other.num = 0;
        }
    }

    Data& operator=(Data&& other)
    {
        std::cout<<"Move"<<std::endl;
        if(&other != this)
        {
            if(other.ptr)
            {
                // this->v = std::move(other.v);
                this->num = other.num;
                other.num = 0;

                if(this->ptr)
                {
                    delete this->ptr;
                }
                this->ptr = other.ptr;
                other.ptr = nullptr;
            }
        }
        return *this;
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
    Data d2(std::move(d1));  // move d1 to d2 and delete d1 memory

    std::cout<<"d1.ptr = "<<d1.ptr<<std::endl;
    std::cout<<"d2.ptr = "<<d2.ptr<<std::endl;

    Data d3;
    d3 = std::move(d2);
    std::cout<<"d2.ptr = "<<d2.ptr<<std::endl;
    std::cout<<"d3.ptr = "<<d3.ptr<<std::endl;
    // d1.print(); // Segmentation fault (core dumped) because d1 moved to d2 and deletet
    // std::cout<<d1

    std::vector<int>v1{2,3,4,8,9};
    std::vector<int>v2 = std::move(v1);
    std::cout<<v2.size()<<std::endl;
    std::cout<<v1.size()<<std::endl;
    std::cout<<&v1<<std::endl;
    std::cout<<&v2<<std::endl;
    
    return 0;
}