
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


void sort_array_ascending(int arr[] , int arr_size)
{
    std::sort(arr,arr+arr_size,ascending);
}

void sort_array_descending(int arr[] , int arr_size)
{
    std::sort(arr,arr+arr_size,descending);
}
