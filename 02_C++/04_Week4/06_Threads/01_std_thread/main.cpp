#include <cstdint>
#include <iostream>
#include <thread>

using namespace  std::chrono_literals;
void operation(void)
{
    while (1) {
        static int i = 0;
        std::cout<<i++<<" ";
        std::this_thread::sleep_for(400ms);
    }
}

int main(int argc, const char** argv) 
{
    std::thread th(operation);
    while (1) {
        std::cout<<" A\n";
        std::this_thread::sleep_for(400ms);
    }
    
    return 0;
}
