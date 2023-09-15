class complex 
{
private:
    int real;
    float img;
public:
    complex()=delete;
    complex(int real,float img);
    void print(void);
    void operator+(int real);
    void operator+(float img);
    complex operator+(const complex& temp);
    bool operator<(const complex& temp);
};
