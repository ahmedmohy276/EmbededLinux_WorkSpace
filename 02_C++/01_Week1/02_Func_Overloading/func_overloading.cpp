#include <iostream>

int multiply(int num1,int num2);
double multiply(double num1,double num2);

int multiply(int num1,int num2)
{
    return num1*num2;
}

double multiply(double num1,double num2)
{
    return num1*num2;
}

int main(void)
{
    std::cout<<multiply(2,3)<<std::endl;
    std::cout<<multiply(2.4,3.1)<<std::endl;
}