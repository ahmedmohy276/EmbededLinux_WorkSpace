#include<iostream>
#include<stdio.h>

typedef unsigned int Wchart;   // If you want to set it at c
int main(void)
{
    wchar_t x = 's';  // wchar_t is used with characters that take more than one byte
    std::cout<<sizeof(x)<<"  "<<x<<std::endl;
    return 0;
}