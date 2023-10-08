#include <cstdint>
#include <iostream>
#include <thread>

using namespace  std::chrono_literals;

void operation(void)
{
    
    while (1) {
        static int i = 0;
        if (i == 10) {
            break;
        }
        std::cout<<i++<<" "<<std::endl;;
        std::this_thread::sleep_for(400ms);  
    }
}

int main(int argc, const char** argv) 
{
    std::thread th(operation);
    
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
