#include <iostream>
#include <algorithm>
#include <iterator>
#include <numeric>
#include <vector>
#include "data.hpp"


int main(int argc, const char** argv) 
{
   data d(16); d();
   d++; d();
   d--; d();
   int x = d++; d();
   std::cout<<"x = "<<x<<std::endl;
   --d; d();
   ++d; d();
   d+10; d();
   d-1; d();
   d>>1; d();
   d<<1; d();
   d/2; d();
   d%2; d();
   d|9; d();
   d&5; d();
   x = d;  std::cout<<"x = "<<x<<std::endl;

   x = 5 + d; std::cout<<"x = "<<x<<std::endl;

   

    return 0;
}