
#include <algorithm>
#include <iostream>

#include "even_odd_array_elements.hpp"

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

    get_even_nums_of_arr(arr, size);
    std::cout<<std::endl;
    get_odd_nums_of_arr(arr, size);
    std::cout<<std::endl;
    
    delete(arr);
    return 0;
}