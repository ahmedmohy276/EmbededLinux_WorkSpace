#include<stdio.h>
#include<iostream>

/*  class : used to define similar object inside differrent enums
    and we can choose this object from which enum*/
/*  we can't do that in c it will give you an error because different values for a constant*/
/*  uint8_t is used to define the size of the enum and this will save memory instead the default 
    size for the enum which be size of int */
enum class result1 : uint8_t
{
    SUCCES,
    FAILED,
    DEFAULT
};

enum class result2 : uint8_t
{
    PASS,
    DEFAULT
};

int main(void)
{
    /* result1 r1 = SUCCES;  --> this will be error */
    result1 r1 = result1::SUCCES;
     /* int x = SUCCES;  --> this will be error */
     int x = static_cast<int>(result1::SUCCES);
     
     result2 r2 = result2::DEFAULT;
     
     int y = 1;
     result2 r3;
    /* ir3 = y;  --> this will be error */
    r3 = static_cast<result2>(y);

    std::cout<<sizeof r3<<std::endl;
    
    return 0;
}