#ifndef LED_H
#define LED_H

#pragma once

class Led
{
private:
    int m_pin = 0;
    int m_count = 0;
    bool m_state = false;
    // friend keyword is used to enable access the class private members
    friend class Data;

public:
    void print(void);
    Led();
    Led(int m_pin,int m_count,bool m_state);
    ~Led();
    // friend keyword is used to enable access the class private members
    friend void func(void);  
};

#endif