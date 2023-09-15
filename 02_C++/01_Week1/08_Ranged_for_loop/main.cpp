#include<iostream>
#include<stdio.h>

int main(void)
{
    int arr[] = {1,2,3};

    // regular for loop
    for (int i = 0; i < 3; i++)
    {
        /* code */
        std::cout<<arr[i]<<std::endl;
    }
    
    // ranged for loop
    for (int i : arr)
    {
        /* code */
        std::cout<<arr[i-1]<<std::endl;
    }
    
    return 0;
}