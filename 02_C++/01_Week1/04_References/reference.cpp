#include <iostream>

int main() {
   int x = 10;
   int &y = x;
   int *ptr = &x;
   y = 3;
   std::cout<<"y = "<<y<<"  x = "<<x<<"  ptr = "<<*ptr<<std::endl;
   std::cout<<"&y = "<<&y<<"  &x = "<<&x<<"  &ptr = "<<ptr<<std::endl;
   
   int n = 0;
   y = n;
   y = 12;
   std::cout<<"y = "<<y<<"  x = "<<x<<"  n = "<<n<<std::endl;
   std::cout<<"&y = "<<&y<<"  &x = "<<&x<<"  &n = "<<&n<<std::endl;
   
    return 0;
}