#ifndef LED_H
#define LED_H

#pragma once

class Led
{
private:
    int pin = 0;
    int count = 0;
    bool state = false;
public:
    void print(void);
    Led();
    Led(int pin,int count,bool state);
    ~Led();
};

#endif