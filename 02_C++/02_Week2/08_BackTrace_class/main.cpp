#include <iostream>
#include "BackTrace_class.hpp"

void func(int x = 0, int  y = 1)
{
    BackTrace b{__PRETTY_FUNCTION__};
}

int main(int argc, const char** argv) 
{
    BackTrace b{__PRETTY_FUNCTION__};
    // BackTrace c {__FUNCTION__};
    // BackTrace d {__func__};
    func();
    return 0;
}