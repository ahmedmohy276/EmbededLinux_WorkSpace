#ifndef LED_H
#define LED_H

#pragma once
/**
 * default : it is used to make the compiler add unseen code without be ipmlemented 
 * by the user for methods like Constructor, destructor,
 * copy constructor, assignment operator
 * 
 * delete : it is used to prevent the user from using methods like Constructor, destructor,
 * copy constructor, assignment operator so there will be a compiler error if you used
 * a methode assigned to delete.
*/
class Led
{
private:
    int m_pin = 0;
    int m_count = 0;
    bool m_state = false;

public:
    void print(void);
    Led() = default;        // do nothing
    //Led() = delete;        // do nothing

    Led(const Led &led) = default;  // copy constructor
    //Led(const Led &led) = delete;  // copy constructor
    /*
    * @brief 
    * the compiler add the below code
    * Led(const Led &led) : m_pin(led.m_pin),m_count(led.m_count),m_state(led.state)
    * */

   Led &operator = (const Led &led) = default;      // assignment operator
   //Led &operator = (const Led &led) = delete;      // assignment operator
   /*
    * @brief
    * the compiler add the below code 
    * m_pin = led.m_pin;
    * m_count = led.m_count;
    * m_state = led.state;
    * */
    Led(int m_pin,int m_count,bool m_state);
    //Led(int m_pin,int m_count,bool m_state) = delete;
    ~Led() = default;
    //~Led() = delete;
};

#endif