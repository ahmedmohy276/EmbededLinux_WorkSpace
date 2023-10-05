
#include <algorithm>
#include <iostream>

#include "merge_two_arrays.hpp"

int main(void)
{
    int arr1_size{};
    int arr2_size{};
    int count{};
    do 
    {
     std::cout<<"please enter first array size greater than 0 : ";
     std::cin>>arr1_size;
    }while (arr1_size <= 0);
    int* arr1 = new int[arr1_size];

    do 
    {
     std::cout<<"please enter second array size greater than 0 : ";
     std::cin>>arr2_size;
    }while (arr2_size <= 0);
    int* arr2 = new int[arr2_size];

    do 
    {
     std::cout<<"please enter first array element "<<count<<" : ";
     std::cin>>arr1[count];
     count++;
    }while (count < arr1_size);
    count = 0;
    do 
    {
     std::cout<<"please enter second array element "<<count<<" : ";
     std::cin>>arr2[count];
     count++;
    }while (count < arr2_size);

    int* mergarr = merge_two_arr(arr1,arr1_size,arr2,arr2_size);
    int mergedsize = arr1_size+arr2_size;
    std::cout<<"merged array :  "<<std::endl;
    std::for_each(mergarr,mergarr+mergedsize,[](int x)
    {
        std::cout<<x<<" , ";
    });
    std::cout<<std::endl;
    delete [] arr1;
    delete [] arr2;
    delete [] mergarr;
    return 0;
}