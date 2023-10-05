
#include <algorithm>
#include <iostream>

#include "merge_two_arrays.hpp"

int main(void)
{
    int arr1_size{};
    int arr2_size{};
    int count{};
    int input{};
    do 
    {
     std::cout<<"please enter first array size greater than 0 : ";
     std::cin>>arr1_size;
    }while (arr1_size <= 0);
    std::vector<int>v1;

    do 
    {
     std::cout<<"please enter second array size greater than 0 : ";
     std::cin>>arr2_size;
    }while (arr2_size <= 0);
    std::vector<int>v2;

    do 
    {
     std::cout<<"please enter first array element "<<count<<" : ";
     std::cin>>input;
     v1.push_back(input);
     count++;
    }while (count < arr1_size);
    count = 0;
    do 
    {
     std::cout<<"please enter second array element "<<count<<" : ";
     std::cin>>input;
     v1.push_back(input);
     count++;
    }while (count < arr2_size);

    auto mergarr = merge_two_arr(v1,v2);
    std::cout<<"merged array :  "<<std::endl;
    std::for_each(mergarr.begin(),mergarr.end(),[](int x)
    {
        std::cout<<x<<" , ";
    });
    std::cout<<std::endl;

    return 0;
}