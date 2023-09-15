#include<iostream>
#include<stdio.h>

int main(void)
{
    printf("Hello World!\n");
    std::cout << "Hello World!" << std::endl;
    bool x1 = true;
    bool x2 = false;
    bool x3 = 1;
    bool x4 = 0;
    bool x5 = 5;
    bool x6 = -3;

    std::cout << x1 << std::endl;
    // to print bool type as true or false not numbers 0,1
    std::cout << std::boolalpha << x2 << std::endl;
    return 0;
}