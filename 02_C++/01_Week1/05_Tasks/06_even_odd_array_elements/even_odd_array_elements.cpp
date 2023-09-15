#include <algorithm>
#include <iostream>

void get_odd_nums_of_arr(int* arr , int arr_size)
{
    std::cout<<"odd elements : "<<std::endl;
    std::for_each(arr,(arr+arr_size),[&](int x)
    {
        static int i = 0;
        if((x % 2) != 0)
        {
            std::cout<<x<<" , ";
        }
    });

}

void get_even_nums_of_arr(int* arr , int arr_size )
{
    std::cout<<"even elements : "<<std::endl;
    std::for_each(arr,(arr+arr_size),[&](int x)
    {
        static int i=0;
        if((x % 2) == 0)
        {
          std::cout<<x<<" , ";
        }
    });

}