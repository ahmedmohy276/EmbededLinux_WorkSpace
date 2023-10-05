
#include <algorithm>
#include <iostream>
#include <vector>

#include "max_array_element.hpp"

int main(void)
{
    int input{};
    int count{0};
    int size{};
    std::vector<int>v;
    do 
    {
     std::cout<<"please enter array size greater than 0 : ";
     std::cin>>size;
    }while (size <= 0);
    
    do 
    {
        std::cout<<"please enter array element "<<count<<" : ";
        std::cin>>input;    
        v.push_back(input);
        count++;
    }while (count < size);

    auto min_max = std::minmax_element(v.begin(),v.end());
    std::cout<<"Max element = "<<max_element(v)<<std::endl;
    std::cout<<"Min element = "<<*min_max.first<<std::endl;
    std::cout<<"Max element = "<<*min_max.second<<std::endl;

    return 0;
}