#include <algorithm>
#include <iostream>
#include "search_num_array.hpp"

int search_num(std::vector<int>v , int num)
{
    auto ptr = std::find(v.begin(),v.end(),num);
    int index{};
    if (ptr != v.end()) 
    {
        index = std::distance(v.begin(),ptr);
        std::cout<<"value "<<num<<" is found at index : "<<index<<std::endl;
    }
    else 
    {
        std::cout<<"value "<<num<<" is not found "<<std::endl;
    }
    return index;
}