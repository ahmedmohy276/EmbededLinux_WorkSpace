
#include <algorithm>
#include <iostream>

#include "max_array_element.hpp"

/**************************************************
*    function to return max number of an array
*    int arr[] : array user want to find its max number
*    int arr_size : array size
*    return : return the max element
***************************************************/
int max_element(int arr[] , int arr_size)
{
    int* ptrmax;
    ptrmax = std::max_element(&arr[0],&arr[arr_size]);
    return *ptrmax; 
}
