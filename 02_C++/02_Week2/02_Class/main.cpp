#include<iostream>
#include"Led.hpp"

int main(void)
{
    {
        Led ledgreen; // Led::Led()  --> Constructor
        ledgreen.print();
    }               // Led::~Led()   --> Destructor
    std::cout<<"Finish of the ledgreen Scope"<<std::endl;
    Led ledred(3,5,true); // Led::Led(pin,count,state)
    ledred.print();

    std::cout<<"Finish of the application"<<std::endl;
    return 0;
}