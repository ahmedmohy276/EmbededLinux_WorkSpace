#include <algorithm>
#include <iostream>

auto is_even = [](int x)
{
    return !(x & 1);
};

auto is_odd = [](int x)
{
    return (x & 1);
};

void get_odd_nums_of_arr(std::vector<int>v)
{
    auto odd_num = std::count_if(v.begin(),v.end(),is_odd);
    std::cout<<"odd elements = "<<odd_num<<std::endl;
    std::for_each(v.begin(),v.end(),[&](int x)
    {
        if(x & 1)
        {
            std::cout<<x<<" , ";
        }
    });

}

void get_even_nums_of_arr(std::vector<int>v )
{
    auto even_num = std::count_if(v.begin(),v.end(),is_even);
    std::cout<<"even elements = "<<even_num<<std::endl;
    std::for_each(v.begin(),v.end(),[&](int x)
    {
        if(!(x & 1))
        {
          std::cout<<x<<" , ";
        }
    });

}