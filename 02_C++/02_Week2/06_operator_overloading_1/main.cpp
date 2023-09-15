#include <iostream>
#include <algorithm>
#include <iterator>
#include <numeric>
#include <vector>
#include "complex.hpp"


int main(int argc, const char** argv) 
{
    complex S1(5,3.4F);
    complex S2(3,2.2F);
    complex S3(4,1.5F);
    complex res = S1 + S2;
    S1 + 5;
    S2 + 0.2F;
    S3 + 1.5F;
    std::cout<<"res = ";
    res.print();
    S1.print();
    S2.print();
    std::vector<complex>v{S1,S2,S3};
    std::sort(std::begin(v),std::end(v));
    std::for_each(std::begin(v),std::end(v),[=](complex s)
    {
        s.print();
    });

    return 0;
}