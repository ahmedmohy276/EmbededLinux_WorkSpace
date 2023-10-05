
#include <iostream>
#include <vector>

#include "search_num_array.hpp"

int main(void)
{
    int size{};
    int count{};
    int num{};
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

    std::cout<<"please enter number for search : ";
    std::cin>>num;

    (void)search_num(v,num);

    return 0;
}