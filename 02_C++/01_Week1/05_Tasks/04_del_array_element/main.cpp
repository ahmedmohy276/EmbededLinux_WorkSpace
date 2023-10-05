
#include <algorithm>
#include <iostream>

int main(void)
{
    int size{};
    int count{};
    int delnum{};
    do 
    {
     std::cout<<"please enter array size greater than 0 : ";
     std::cin>>size;
    }while (size <= 0);

    int* arr = new int[size];

    do 
    {
     std::cout<<"please enter array element "<<count<<" : ";
     std::cin>>arr[count];
     count++;
    }while (count < size);

    std::cout<<"please enter number for delete : ";
    std::cin>>delnum;

    std::cout<<std::endl;
    auto arrend = std::remove(arr,arr+size,delnum);
    std::cout<<"array after delete :  "<<std::endl;
    for (int i = 0; ((arrend) != (arr+i)); i++) 
    {
        std::cout<<arr[i]<<" , ";
    }
    std::cout<<std::endl;
    delete [] arr;
    return 0;
}