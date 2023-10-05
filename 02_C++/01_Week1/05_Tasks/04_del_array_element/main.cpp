
#include <algorithm>
#include <iostream>
#include <numeric>
#include <bits/stdc++.h>

int main(void)
{
    int size{};
    int count{};
    int delnum{};
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

    std::cout<<"please enter number for delete : ";
    std::cin>>delnum;

    std::cout<<std::endl;
    auto arrend = std::remove(v.begin(),v.end(),delnum);
    std::cout<<"After remove"<<std::endl;
    std::for_each(v.begin(),v.end(),[](int x)
    {
        std::cout<<x<<" , ";
    });
    std::cout<<std::endl;

    std::fill(arrend,v.end(),0);
    std::cout<<"After fill "<<std::endl;
    std::for_each(v.begin(),v.end(),[](int x)
    {
        std::cout<<x<<" , ";
    });
    std::cout<<std::endl;

    v.erase(arrend,v.end());
    std::cout<<"After erase"<<std::endl;
    std::for_each(v.begin(),v.end(),[](int x)
    {
        std::cout<<x<<" , ";
    });
    std::cout<<std::endl;

    return 0;
}