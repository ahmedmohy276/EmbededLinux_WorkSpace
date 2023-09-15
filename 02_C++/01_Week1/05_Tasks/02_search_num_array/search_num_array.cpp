#include <algorithm>
#include <iostream>

int search_num(int* arr , int size , int num)
{
    int* ptr;
    ptr = std::find(arr , arr+size, num);
    int index{};
    if (ptr != (arr+size)) 
    {
        index = std::distance(arr,ptr);
        std::cout<<"value "<<num<<" is found at index : "<<index<<std::endl;
    }
    else 
    {
        std::cout<<"value "<<num<<" is not found "<<std::endl;
    }
    return index;
}