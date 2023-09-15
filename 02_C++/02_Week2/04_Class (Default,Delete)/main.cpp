#include<iostream>
#include"Led.hpp"


int main(void)
{
    Led ledred(3,5,true); // Led::Led(m_pin,m_count,m_state)
    Led ledgreen(ledred);

    ledred.print();
    ledgreen.print();
    return 0;
}