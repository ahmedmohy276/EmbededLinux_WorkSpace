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
    std::packaged_task<int(int)> p_t(operation);
    std::future<int> fu = p_t.get_future();

    std::thread th(std::move(p_t),10);
    std::cout<<"Thread started\n";

    int result = fu.get();

    std::cout<<"\nsum = "<<result;

    if(th.joinable())
    {
        th.join();
        std::cout<<"\nmain thread will not terminate till thread th terminate"<<std::endl;
    }
    else
    {
        std::cout<<"\nmain thread will terminate and thread th will run at background"<<std::endl;
    }
    return 0;
}
