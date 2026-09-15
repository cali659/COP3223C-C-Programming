// COP 3223C Leture 2.c
#include <stdio.h>
int main()
{
    int basic_salary;
    //%lu is a format specifier for unigned long int 
    printf("size of basic salary is %lu\n", sizeof(basic_salary));
    printf("value of basic salary is %d\n", basic_salary); //%d is format specifier for int
    printf("Address of basic salary is %p\n", &basic_salary); //%p is format specifier for address

    basic_salary = 5000; // = is called assignemnt operator 
    //5000 = basic_salary // this is wrong 

    printf("value of basic salary is %d\n", basic_salary); //%d is format specifier for int
    return 0;
}