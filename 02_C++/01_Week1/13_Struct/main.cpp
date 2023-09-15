#include<stdio.h>
#include<iostream>

struct test
{
    int y = 8;
    void Dispaly(void)
    {
        std::cout<<"test struct"<<std::endl;
    }
};

struct data : test    // this is called inheritance
{
    // test var;//in c iwe want to declare struct inside another one but in c++ this made by inheritance
    int x = 2;              // we can't initialize variables inside struct in c
    void Function(void)     // we can't declare a function inside struct in c
    {
        std::cout<<"Hello World"<<std::endl;
    }
};

int main(void)
{
    data d;
    std::cout<<d.x<<std::endl;
    std::cout<<d.y<<std::endl;
    d.Function();
    d.Dispaly();

    return 0;
}