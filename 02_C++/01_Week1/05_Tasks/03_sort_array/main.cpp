
#include <iostream>
#include <algorithm>

#include "sort_array.hpp"

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

    sort_array_ascending(arr, size);
    std::cout<<"ascending sorted array :  "<<std::endl;
    std::for_each(arr,arr+size,[](int x)
    {
        std::cout<<x<<" , ";
    });
    std::cout<<std::endl;
    sort_array_descending(arr, size);
    std::cout<<"descending sorted array :  "<<std::endl;
    std::for_each(arr,arr+size,[](int x)
    {
        std::cout<<x<<" , ";
    });
    std::cout<<std::endl;
    delete(arr);
    return 0;
}