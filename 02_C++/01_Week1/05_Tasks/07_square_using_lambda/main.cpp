
#include <algorithm>
#include <iostream>

    auto square = [](auto number)-> auto
    {
        return number*number;
    };

int main(void)
{
    int num{};

    std::cout<<"please enter a number you want to calculat its square: ";
    std::cin>>num;
    int result  = square(num);
    std::cout<<"number square =  "<<result<<std::endl;
    return 0;
}