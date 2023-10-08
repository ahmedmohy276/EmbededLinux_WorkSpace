
#include <iostream>
#include <iterator>
#include <memory>
#include <numeric>


int main(int argc, const char** argv) 
{
    std::unique_ptr<int> uniqueptr  = std::make_unique<int>(2);
    std::unique_ptr<int[]>arr(new int[5]{1,2,3,4,5});
    std::unique_ptr<int> uniqueptr2;
    uniqueptr2 = std::make_unique<int>(5);  
    // uniqueptr2 = uniqueptr;  // we can't copy unique pointer
    std::cout<<uniqueptr.get()<<std::endl;
    
    std::cout<<*uniqueptr<<std::endl<<*uniqueptr2<<std::endl;
    for(int i=0;i<5;i++)
    {
        std::cout<<arr[i]<<" , ";
    }
    std::cout<<std::endl;
    uniqueptr.reset();   // use to delete the pointer
    // std::cout<<*uniqueptr<<std::endl;
    std::cout<<uniqueptr.release()<<std::endl;
    std::cout<<uniqueptr.get()<<std::endl;

    // we don't have to delete unique pointer because it do this mechanism 

    return 0;
}