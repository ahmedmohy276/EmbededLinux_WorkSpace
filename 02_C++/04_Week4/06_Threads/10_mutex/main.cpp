#include <cmath>
#include <cstdint>
#include <future>
#include <iostream>
#include <list>
#include <mutex>
#include <thread>

std::list<int> data;
std::mutex mtx;
void operation(int count)
{
    std::cout<<" operate Thread started\n";
    for(int i = 0;i<count;i++)
    {
        if(i % 10 == 0)
        {
            mtx.lock();
            data.push_back(i);
            mtx.unlock();

            std::cout<<i<<" ";
        }
        
    }
    std::cout<<std::endl;
}

int main(int argc, const char** argv) 
{
    std::future<void> fu1 = std::async(std::launch::async,operation,100);
    std::future<void> fu2 = std::async(std::launch::async,operation,100);

    fu1.wait();
    fu2.wait();

    std::cout<<"count = "<<data.size()<<std::endl;

    return 0;
}
