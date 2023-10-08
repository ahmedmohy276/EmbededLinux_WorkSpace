
#include <iostream>

namespace X1
{
    int x = 10;
}

namespace X2
{
    int x = 8;
}

namespace my 
{
    int y = 3;
    int a = 4;
    namespace inmy{
    int z = 9;
    }
}

namespace sc = my::inmy;
using my::y;
using namespace my;

int main(int argc, const char** argv) 
{
    std::cout<<X1::x<<std::endl<<X2::x<<std::endl;
    std::cout<<sc::z<<std::endl;
    std::cout<<y<<std::endl;
    std::cout<<a<<std::endl;
    return 0;
}