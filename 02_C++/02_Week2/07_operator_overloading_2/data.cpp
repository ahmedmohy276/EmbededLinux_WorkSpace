#include <iostream>
#include "data.hpp"


data::data(int num) : num(num){}

void data::operator+(int num)
{
    this->num +=num;
}

void data::operator+=(int num) // for d += 2;
{
    this->num +=num;
}

// data data::operator+(int num,int x) // for d = d + num;
// {
//     data res(0);
//     res.num = this->num + num;
//     return res;
// }

// data data::operator-(int num,int x) // for d = d - num;
// {
//     data res(0);
//     res.num = this->num + num;
//     return res;
// }

void data::operator-(int num)
{
    this->num -=num;
}

void data::operator/(int num)
{
    this->num /=num;
}

void data::operator%(int num)
{
    this->num %=num;
}

void data::operator*(int num)
{
    this->num *=num;
}

void data::operator++(void)
{
    this->num++;
}

void data::operator--(void)
{
    this->num--;
}

int data::operator++(int x)
{
    int temp = this->num;
    this->num++;
    return temp;
}

int data::operator--(int x)
{
    int temp = this->num;
    this->num--;
    return temp;
}

void data::operator>>(int num)
{
    this->num >>=num;
}

void data::operator<<(int num)
{
    this->num <<=num;
}

void data::operator&(int num)
{
    this->num &= num;
}

void data::operator|(int num)
{
    this->num |=num;
}

int operator+(int num , const data &d)
{
    return num + d.num;
}

void data::operator()(void)
{
    std::cout<<"Num = "<<this->num<<std::endl;
}

data::operator int()
{
    return num;
}