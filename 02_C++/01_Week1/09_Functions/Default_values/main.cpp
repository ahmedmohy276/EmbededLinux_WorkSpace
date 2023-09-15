#include<iostream>
#include<stdio.h>

void Func(int x , int y = 10 , int z = 4);

int main(void)
{
    Func(2);
    Func(3,5);
    Func(3,5,7);
    return 0;
}


void Func(int x, int y, int z)
{
    std::cout << x << " " << y << " " << z << std::endl;
}
