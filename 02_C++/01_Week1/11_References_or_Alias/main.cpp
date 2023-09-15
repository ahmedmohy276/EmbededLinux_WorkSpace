#include<stdio.h>
#include<iostream>

int main(void)
{
    int x{10};      // x --> 0x100  --> 10
    int &y = x;  // alias reference mean x,y ---> 0x100

    int *ptr = &x;  // ptr 0x104 -->0x100

    std::cout<<"ref y= "<<y<<" x= " <<x<<" y="<<y<<" ptr="<<*ptr<<std::endl;
    //change reference
    int n=0; // n --> 0x102
    y=n;     // n,y --> 0x102
    y=12;
    std::cout<<" x= " <<x<<" n="<<n<<std::endl;

    // undefined reference is an error 
    //int &y;



    return 0;
}