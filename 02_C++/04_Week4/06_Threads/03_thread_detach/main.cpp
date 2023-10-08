#include <cstdint>
#include <iostream>
#include <thread>


void operation(void)
{
    // std::this_thread::sleep_for(600);
    std::cout<<"Thread ended \n";
}

int main(int argc, const char** argv) 
{
    std::thread th(operation);
    th.detach();

    if(th.joinable())
    {
        th.join();
        std::cout<<"main thread will not terminate till thread th terminate"<<std::endl;
    }
    else
    {
        std::cout<<"main thread will terminate and thread th will run at background"<<std::endl;
    }
    return 0;
}
