
#include <iostream>
#include <memory>

template<typename T>
void print(T arg)
{
    std::cout<<arg<<std::endl;
}

template <typename T , typename... Args>
void print(T arg , Args... args)
{
    std::cout<<arg<<std::endl;
    print(args...);
}
int main(int argc, const char** argv) 
{
    print(5,"Hello",2.1,'A');

    return 0;
}