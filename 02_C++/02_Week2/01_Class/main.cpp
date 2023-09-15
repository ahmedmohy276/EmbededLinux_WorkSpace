#include<stdio.h>
#include<iostream>

class Data
{
private:
    int y=10;
public:
    int x = 20;
    void print(void);

};

void Data::print(void)
{
    std::cout<<"hi "<<y<<std::endl<<"Hello "<<x<<std::endl;
}

int main(void)
{
    Data d;
    d.print();
    /* sizeof(class) is the size of variables inside the class, 
    if it hasn't variables its size is equal sizeof(void) = 1*/
    std::cout<<sizeof(d)<<std::endl;
    return 0;
}