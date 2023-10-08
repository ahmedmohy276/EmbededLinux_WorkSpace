#include <cmath>
#include <cstdint>
#include <future>
#include <iostream>
#include <list>
#include <thread>

std::list<int> data;

void operation(int count)
{
    std::cout<<" operate Thread started\n";
    for(int i = 0;i<count;i++)
    {
        if(i % 10 == 0)
        {
            data.push_back(i);
            std::cout<<i<<" ";
        }
        
    }
}

int main(int argc, const char** argv) 
{
    (void) std::async(std::launch::async,operation,100);
    std::cout<<"\noperate1 blocked and operate2 will run also synchronously\n";
    (void) std::async(std::launch::async,operation,100);
    std::cout<<"\ncount = "<<data.size()<<std::endl;


    return 0;
}
