#include <iostream>
#include <vector>
#include <algorithm>

int main(void)
{
    std::vector<int>v{1,6,8,4,3,5,8,9};
    std::for_each(v.begin(),v.end(),[](int i)
    {
        std::cout<<i<<" ";
    });
    std::cout<<std::endl;

    auto sum = [](int n1 , int n2)
    {
        return n1 + n2;
    };

    std::cout<<"sum = "<<sum(1,5)<<std::endl;
    return 0;
}