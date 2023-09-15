#include<iostream>
#include"Led.hpp"

void func(void)
{
    Led ledgreen;
    ledgreen.m_pin = 5;
}

int main(void)
{
    Led ledred(3,5,true); // Led::Led(m_pin,m_count,m_state)
    ledred.print();
    func();
    return 0;
}