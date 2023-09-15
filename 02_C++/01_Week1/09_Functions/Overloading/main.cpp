#include<iostream>
#include<stdio.h>

void Func(int x , float y);
void Func(int x , int y);

void LCD_Display(const char *s);
void LCD_Display(char c);
void LCD_Display(int num);

int main(void)
{
    Func(3,5);
    Func(3,5.7F);
    LCD_Display("string");
    LCD_Display(5);
    LCD_Display('N');

    return 0;
}


void Func(int x, int y)
{
    std::cout << "int " << "int" << std::endl;
}

void Func(int x, float y)
{
    std::cout << "int " << "float" << std::endl;
}


void LCD_Display(const char *s)
{
    std::cout << s << std::endl;

}

void LCD_Display(char c)
{
    std::cout << c << std::endl;

}

void LCD_Display(int num)
{
    std::cout << num << std::endl;
}