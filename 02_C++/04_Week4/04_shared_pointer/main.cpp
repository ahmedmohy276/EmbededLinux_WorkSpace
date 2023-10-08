
#include <iostream>
#include <memory>

void shared(std::shared_ptr<int>ptr)
{
    std::cout<<ptr.use_count()<<std::endl;
}

int main(int argc, const char** argv) 
{
    std::shared_ptr<int> ptr = std::make_shared<int>(10);
    std::cout<<ptr.use_count()<<std::endl;
    std::shared_ptr<int> ptr2 = ptr;
    std::cout<<ptr.use_count()<<std::endl;
    std::cout<<ptr2.use_count()<<std::endl;
    std::shared_ptr<int> ptr3 = ptr2;
    std::cout<<ptr2.use_count()<<std::endl;
    std::cout<<ptr3.use_count()<<std::endl;
    shared(ptr);
    std::cout<<ptr.use_count()<<std::endl;
    // we don't have to delete shared pointer because it do this mechanism 

    return 0;
}