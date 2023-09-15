#include<stdio.h>
#include<iostream>

int main(void)
{
    auto var1 = 7;
    auto var2 = 15.6F;s
    auto var3 = 'a';
    auto var4 = "Hello char*";
    auto var5 = std::string("Hello string");
    
    // With constant
    const int x = 5;
    auto var6 = x;
    // to make it const
    const auto var7 = x;

    // with reference const
    auto &var8 = x;
    // with pointer const
    auto ptr = &x;
    // with initializing list
    auto lst={1,2,3,4,5,6,7,8,9};
    return 0;
}