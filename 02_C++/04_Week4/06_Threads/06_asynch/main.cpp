#include <cmath>
#include <cstdint>
#include <future>
#include <iostream>
#include <thread>


int operation(int count)
{
    int sum = 0;
    for(int i = 0;i<count;i++)
    {
        std::cout<<i<<" ";
        sum +=i;
    }

    return sum;
}

int main(int argc, const char** argv) 
{
    std::future<int> fu = std::async(operation,10);

    std::cout<<"Thread started\n";

    int result = fu.get();

    std::cout<<"\nsum = "<<result<<std::endl;


    return 0;
}
