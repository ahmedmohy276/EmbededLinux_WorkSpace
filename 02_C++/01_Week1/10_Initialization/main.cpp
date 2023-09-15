#include<stdio.h>
#include<iostream>

int main(void)
{
    int x0;         // default initialization
    std::cout<<"x0 = "<<x0<<std::endl;
    /* it is used for zero initialization like int *a = new int[10]{}; or int n{}; */
    int x1{1};      // value initialization 
    int x2(1);      // direct initialization
    int x3 = 1;     // copy initialization

    return 0;
}