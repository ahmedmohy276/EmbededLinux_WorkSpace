
#include <iostream>

#include "search_num_array.hpp"

int main(void)
{
    int size{};
    int count{};
    int num{};
    do 
    {
     std::cout<<"please enter array size greater than 0 : ";
     std::cin>>size;
    }while (size <= 0);

    int* arr = new int[size];

    do 
    {
     std::cout<<"please enter array element "<<count<<" : ";
     std::cin>>arr[count];
     count++;
    }while (count < size);

    std::cout<<"please enter number for search : ";
    std::cin>>num;

    (void)search_num(arr,size,num);
    delete [] arr;
    return 0;
}