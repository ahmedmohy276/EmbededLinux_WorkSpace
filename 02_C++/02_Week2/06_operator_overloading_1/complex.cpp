#include <iostream>
#include "complex.hpp"


complex::complex(int real,float img) : real(real) , img(img) {}

void complex::print(void)
{
    std::cout<<this->real<<" + "<<this->img<<"j"<<std::endl;
}

void complex::operator+(int real)
{
    this->real += real;
}
void complex::operator+(float img)
{
    this->img += img;
}
complex complex::operator+(const complex& temp)
{
    complex result(0,0);
    result.real = this->real + temp.real;
    result.img = this->img + temp.img;
    return result;
}

bool complex::operator<(const complex& temp)
{
    return ((this->real < temp.real) && (this->img) < temp.img);
}