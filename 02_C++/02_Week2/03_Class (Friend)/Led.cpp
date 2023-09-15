#include "Led.hpp"
#include<iostream>

Led::Led()
{
    std::cout<<"Constructor"<<std::endl;

}

/* Led::Led(int m_pin,int m_count,bool m_state)
{
    this->m_pin = m_pin;
    this->m_count = m_count;
    this->m_state = m_state;
    std::cout<<"Parameters "<<m_pin<<" "<<m_count<<" "<<m_state<<std::endl;
} */
// Another way to set class private members
Led::Led(int m_pin,int m_count,bool m_state) : m_pin(m_pin),m_count(m_count),m_state(m_state)
{
    std::cout<<"Parameters "<<m_pin<<" "<<m_count<<" "<<m_state<<std::endl;
}

Led::~Led()
{
    std::cout<<"Destructor "<<std::endl;

}

void Led::print(void)
{
    std::cout<<"Hello World "<<m_pin<<" "<<m_count<<" "<<m_state<<std::endl;
}