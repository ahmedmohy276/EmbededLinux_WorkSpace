
#include <iostream>
#include <algorithm>

#include "sort_array.hpp"

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

    sort_array_ascending(v);
    std::cout<<"ascending sorted array :  "<<std::endl;
    std::for_each(v.begin(),v.end(),[](int x)
    {
        std::cout<<x<<" , ";
    });
    std::cout<<std::endl;
    sort_array_descending(v);
    std::cout<<"descending sorted array :  "<<std::endl;
    std::for_each(v.begin(),v.end(),[](int x)
    {
        std::cout<<x<<" , ";
    });
    std::cout<<std::endl;
    return 0;
}