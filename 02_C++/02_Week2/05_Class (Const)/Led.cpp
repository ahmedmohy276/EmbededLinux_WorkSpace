#include "Led.hpp"
#include<iostream>

/* we should use initializing list in the constructor to initialize const members because
*  it will give an error if you create class object without initializing the const members
 */
Led::Led(): m_const(0) 
{
    std::cout<<"Constructor"<<std::endl;

}

/* Led::Led(int m_pin,int m_count,bool m_state)
{
    this->m_pin = m_pin;
    this->m_count = m_count;
    this->m_state = m_state;
    std::cout<<"Parameters "<<m_pin<<" "<<m_count<<" "<<m_state<<std::endl;
} */
/** Another way to set class private members is initializing list and it is used with 
 *  Const members initialization because we can't initialize them 
 *  like this->m_const = m_const;
 **/
Led::Led(int m_pin,int m_count,bool m_state,int m_const) : m_pin(m_pin),m_count(m_count),m_state(m_state),m_const(m_const)
{

}

/* Led::~Led()
{
    std::cout<<"Destructor "<<std::endl;

} */

void Led::print(void)
{
    std::cout<<"const members "<<m_const<<std::endl;
    std::cout<<"Hello World "<<m_pin<<" "<<m_count<<" "<<m_state<<std::endl;
}

void Led::Display(void) const
{
    std::cout<<"const Method "<<std::endl;
}