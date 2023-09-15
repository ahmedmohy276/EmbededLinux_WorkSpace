
#include <iostream>

#include "max_array_element.hpp"

int main(void)
{
    int size{};
    int count{};
    do 
    {
     std::cout<<"please enter array size greater than 0 : ";
     std::cin>>size;
    }while (size <= 0);

    int* arr = new int(size);

    do 
    {
     std::cout<<"please enter array element "<<count<<" : ";
     std::cin>>arr[count];
     count++;
    }while (count < size);

    std::cout<<"Max element = "<<max_element(arr,size)<<std::endl;
    delete(arr);
    return 0;
}