#include <algorithm>
#include <iostream>

int* merge_two_arr(int* arr1 , int arr1_size ,int* arr2 , int arr2_size)
{
    int* merged_arr = new int(arr1_size + arr2_size);
    std::merge(arr1,arr1+arr1_size,arr2,arr2+arr2_size,merged_arr);
    return merged_arr;
}