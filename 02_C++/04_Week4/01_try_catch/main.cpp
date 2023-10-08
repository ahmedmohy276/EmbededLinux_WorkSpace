#include <exception>
#include <iostream>
#include <stdexcept>
#include <vector>

void invalid_argument()
{
    throw std::invalid_argument("invalid argument\n");
}

void runtime_error()
{
    throw std::runtime_error("run time error\n");
}
void exception()
{
    throw std::exception();
}


int main(int argc, const char** argv) 
{
    try 
    {
        runtime_error();
    } 
    catch (std::runtime_error const& e) 
    {
        std::cout<<e.what();
    }

    try 
    {
        invalid_argument();
    } 
    catch (...) 
    {
        // std::cout<<e.what();
        std::cout<<"invalid argumen\n";
    }

    // try 
    // {
    //     runtime_error();
    // } 
    // // rethrow the error to  terminate with core dumped
    // catch (std::runtime_error const& e )  
    // {
    //     throw std::runtime_error("Run time error");
    // }

    try 
    {
        invalid_argument();
    } 
    catch (std::invalid_argument const& e) 
    {
        std::cout<<e.what();
    }

    try 
    {
        exception();
    } 
    catch (std::exception const& e) 
    {
        std::cout<<e.what();
    }

    std::vector<int>v{0,1,2,3,4};
    int var2 = v.at(6);

    return 0;
}