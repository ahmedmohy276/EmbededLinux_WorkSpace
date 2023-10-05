#include <iostream>
#include <iterator>

class output
{
    public :
    // vptr--> output::turn_on()
    virtual void turn_on(void)
    {
        std::cout<<"Pin is high"<<std::endl;
    }
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
    output O;
    led L;
    motor M;
    make_operation(&L);
    make_operation(&M);
    make_operation(&O);
    return 0;
}