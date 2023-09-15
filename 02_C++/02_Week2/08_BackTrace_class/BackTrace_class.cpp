#include <iostream>
#include "BackTrace_class.hpp"

BackTrace::BackTrace(std::string name) : name(name)
{
    std::cout<<"Enter "<<name<<std::endl;
}

BackTrace::~BackTrace()
{
    std::cout<<"Exit "<<name<<std::endl;
}
