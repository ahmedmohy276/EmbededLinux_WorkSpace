
#include <algorithm>
#include <iostream>

#include "sort_array.hpp"

auto descending =  [](int first , int second)
    {
        return first > second;
    };

auto ascending =  [](int first , int second)
    {
        return first < second;
    };


void sort_array_ascending(std::vector<int> &v)
{
    std::sort(v.begin(),v.end(),ascending);
}

void sort_array_descending(std::vector<int> &v)
{
    std::sort(v.begin(),v.end(),descending);
}
