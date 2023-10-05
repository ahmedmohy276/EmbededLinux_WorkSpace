#include <iostream>
#include <iterator>

class output        //Interface class
{
    public :
    // vptr--> output::turn_on()
    virtual void turn_on(void) = 0;
};

class input        //Abstract class
{
    public :
    virtual void direction(void) = 0;
    virtual int readpin(int pin)
    {
        return 0;
    }
};

class sw : public input
{
    public:
    void direction()
    {}
};

class led : public output
{
    public:
    // vptr--> led::turn_on()
    void turn_on(void)
    {
        std::cout<<"make pin high to turn led on"<<std::endl;
    }
};

class motor : public output
{
    public:
    // vptr--> motor::turn_on()
    void turn_on(void)
    {
        std::cout<<"make pin low to turn motor on"<<std::endl;
    }
};


void make_operation(output* out) 
{
    out->turn_on(); 
}

int main(int argc, const char** argv) 
{
    // output O; //you can't create instance from abstract class
    led L;
    motor M;
    sw s;
    make_operation(&L);
    make_operation(&M);
    // make_operation(&O);
    return 0;
}