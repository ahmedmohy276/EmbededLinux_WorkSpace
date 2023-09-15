#include<iostream>
#include"Led.hpp"


int main(void)
{
    Led ledred(3,5,true,10); // Led::Led(m_pin,m_count,m_state)
    Led ledblue;
    ledblue.static_function(999); 

    ledblue.publnumber = 50;
    ledblue.setprivnum(51);
    ledblue.static_function(99);

    Led::publnumber = 60;
    Led::setprivnum(61);
    Led::static_function(70);

    std::cout<<"privnum = "<<Led::getprivnum()<<std::endl;

    return 0;
}