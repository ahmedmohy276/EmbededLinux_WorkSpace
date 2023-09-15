
class data 
{
private:
    int num;
public:
    data()=delete;
    data(int num);
    void operator+(int num);
    void operator+=(int num);
    void operator-(int num);
    // data operator+(int num); // for d = d + num;
    // data operator*(int num); // for d = d - num;
    void operator/(int num);
    void operator%(int num);
    void operator*(int num);
    void operator++(void);
    void operator--(void);
    int operator++(int x);
    int operator--(int x);
    void operator>>(int num);
    void operator<<(int num);
    void operator&(int num);
    void operator|(int num);
    friend int operator+(int num , const data &d);
    void operator()(void);  // functor
    operator int();         // conversion
};
