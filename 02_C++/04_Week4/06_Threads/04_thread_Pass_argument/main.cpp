#include <cmath>
#include <cstdint>
#include <iostream>
#include <thread>


using namespace std::chrono_literals;
void operation(int count)
{
    for(int i = 0;i<count;i++)
    {
        std::cout<<i<<" ";
        std::this_thread::sleep_for(400ms);
    }
}

int main(int argc, const char** argv) 
{
    std::thread th(operation,10);

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
