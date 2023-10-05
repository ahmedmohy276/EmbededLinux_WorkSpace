
#include <algorithm>
#include <iostream>
#include <vector>

#include "max_array_element.hpp"

/**************************************************
*    function to return max number of an array
*    int arr[] : array user want to find its max number
*    int arr_size : array size
*    return : return the max element
***************************************************/
int max_element(std::vector<int> v)
{
    auto ptrmax_min = std::max_element(v.begin(),v.end());
    return *ptrmax_min; 
}
