#include <cmath>
#include <cstdint>
#include <functional>
#include <future>
#include <iostream>
#include <list>
#include <ostream>
#include <thread>



using namespace std::chrono_literals;

int operation(std::promise<int>& p_count)
{
    std::cout<<" operate Thread started\n";
    std::future<int> fu= p_count.get_future();
    int count = fu.get();
    std::cout<<" thread is unblocked and it will continue to execute\n";
    int sum = 0;
    for(int i = 0;i<count;i++)
    {
        std::this_thread::sleep_for(200ms);
        std::cout<<i<<" "<<std::flush;
        sum += i;
    }
    std::cout<<std::endl;
    return sum;
}

int main(int argc, const char** argv) 
{
    std::promise<int> data;
    std::future<int>fu = std::async(operation,std::ref(data));
    std::this_thread::sleep_for(3s);
    data.set_value(10);
    int result = fu.get();

    std::cout<<" sum = "<<result<<std::endl;


    return 0;
}
