#include <iostream>


class person
{
    protected:
    int y = 20;
    public:
    int x = 10;
    void fun(void)
    {
        std::cout<<"Person"<<std::endl;
    }
};

class ahmed : public person
{
    private:
    int z =50;
    public:
    int d = 100;
    void fun2(void)
    {
        std::cout<<"ahmed  "<<z<<", "<<d<<", "<<x<<", "<<y<<std::endl;
    }
};

class oday : protected ahmed
{
    
    public:
    int c = 6;
    void fun3(void)
    {
        std::cout<<"oday "<<c<<", "<<d<<", "<<x<<", "<<y<<std::endl;
    }
};

class samar : private oday
{
    
    public:
    int a = 5;
    void fun4(void)
    {
        std::cout<<"samar "<<a<<", "<<c<<", "<<d<<", "<<x<<", "<<y<<std::endl;
    }
};

int main(int argc, const char** argv) 
{
    person p;
    ahmed a;
    oday o;
    samar s;
    p.fun();
    // a.y;   we can't access y as it is a protected member of person
    a.fun2();
    o.fun3();
    s.fun4();
    return 0;
}