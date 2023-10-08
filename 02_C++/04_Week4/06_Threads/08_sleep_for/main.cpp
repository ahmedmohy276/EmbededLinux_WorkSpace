#include <cmath>
#include <cstdint>
#include <future>
#include <iostream>
#include <list>
#include <ostream>
#include <thread>



using namespace std::chrono_literals;

void operation(int count)
{
    std::cout<<" operate Thread started\n";
    for(int i = 0;i<count;i++)
    {
        std::this_thread::sleep_for(600ms);
        std::cout<<i<<" "<<std::flush;
    }
    std::cout<<std::endl;
}

int main(int argc, const char** argv) 
{
    auto fu = std::async(operation,10);
    fu.wait();


    return 0;
}
