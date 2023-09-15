#include <iostream>
#include <iomanip>
int main(void)
{
    unsigned char c = 0xAB;
    int *ptr = (int*) &c;  // pass at compile time but may fail at run time
    printf("*ptr = %x c = %X \n",*ptr,c); // you are accessing 3 byte out of char boundary
    // int ptr2 = static_cast<int*>(&c); // error : nvalid ‘static_cast’ from type ‘char*’ to type ‘int*
    // int *ptr45 = reinterpret_cast<char*>(&c); //a value of type "char *" cannot be used to initialize an entity of type "int 
    int value = 12;
    float fl = static_cast<float>(value);

    const volatile int volconval = 16;      // volatile will give us the ability to change the const value
    const volatile int *volptr1 = &volconval;
    const int conval = 20;
    const int *ptr1 = &conval;
    *const_cast<int*>(ptr1) = 7;
    *const_cast<int*>(volptr1) = 33;

    // int *ptr2 = ptr1;        //error: invalid conversion from ‘const int*’ to ‘int*’
    int *ptr2 = const_cast<int*>(ptr1);
    int *volptr3 = const_cast<int*>(volptr1);
    std::cout<<"*ptr1 = "<<*ptr1<<" , *ptr2 = "<<*ptr2<<" , conval = "<<conval<<std::endl;
    std::cout<<"*volptr1 = "<<*volptr1<<" , *volptr3 = "<<*volptr3<<" , volconval = "<<volconval<<std::endl;
    *ptr2 = 5;
    *volptr3 = 10;
    std::cout<<"*ptr1 = "<<*ptr1<<" , *ptr2 = "<<*ptr2<<" , conval = "<<conval<<std::endl;
    std::cout<<"*volptr1 = "<<*volptr1<<" , *volptr3 = "<<*volptr3<<" , volconval = "<<volconval<<std::endl;

    const char *pstr = "helloo";
    // *const_cast<char*>(pstr) = '\0';       //Segmentation fault (core dumped)

    int* p = new int(0xffddccbb);
    char* ch = reinterpret_cast<char*>(p);
    printf("*ch = %X , *p = %X \n", *ch,*p);
    if(((*ch) & (0x000000FF)) == 0xBB)
    {
        std::cout<<"Little Indian"<<std::endl;
    }
    else if(((*ch) & (0xFF000000)) == 0xBB)
    {
        std::cout<<"Big Indian"<<std::endl;
    }

}
