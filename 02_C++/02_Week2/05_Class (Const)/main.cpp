#include<iostream>
#include"Led.hpp"


int main(void)
{
    Led ledred(3,5,true,10); // Led::Led(m_pin,m_count,m_state)
    const Led ledblue;
    ledblue.Display();
    //ledblue.print();    // this will be an error because const instances can only access const methods
    /* normall instances can access all methods */
    ledred.print();
    ledred.Display();
    return 0;
}