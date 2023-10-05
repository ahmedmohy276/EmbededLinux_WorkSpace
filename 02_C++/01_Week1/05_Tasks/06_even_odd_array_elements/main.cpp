
#include <algorithm>
#include <iostream>
#include <vector>

#include "even_odd_array_elements.hpp"

int main(void)
{
    int size{};
    int count{};
    int input{};
    do 
    {
     std::cout<<"please enter array size greater than 0 : ";
     std::cin>>size;
    }while (size <= 0);

    std::vector<int>v;

    do 
    {
     std::cout<<"please enter array element "<<count<<" : ";
     std::cin>>input;
     v.push_back(input);
     count++;
    }while (count < size);

    get_even_nums_of_arr(v);
    std::cout<<std::endl;
    get_odd_nums_of_arr(v);
    std::cout<<std::endl;
    
    return 0;
}