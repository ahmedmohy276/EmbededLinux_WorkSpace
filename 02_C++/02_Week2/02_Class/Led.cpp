#include "Led.hpp"
#include<iostream>

Led::Led()
{
    std::cout<<"Constructor"<<std::endl;

}

/* Led::Led(int pin,int count,bool state)
{
    this->pin = pin;
    this->count = count;
    this->state = state;
    std::cout<<"Parameters "<<pin<<" "<<count<<" "<<state<<std::endl;
} */
// Another way to set class private members
Led::Led(int pin,int count,bool state) : pin(pin),count(count),state(state)
{
    std::cout<<"Parameters "<<pin<<" "<<count<<" "<<state<<std::endl;
}

Led::~Led()
{
    std::cout<<"Destructor "<<std::endl;

}

void Led::print(void)
{
    std::cout<<"Hello World "<<pin<<" "<<count<<" "<<state<<std::endl;
}