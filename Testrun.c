#include <stdio.h>

int main ()
{
int basic_salary;
printf("Address of basic salary is %p\n", &basic_salary);
printf("Value Basic salary is %d\n", basic_salary);
printf("Size of basic salary is: %lu\n", sizeof (basic_salary));

basic_salary = 8000; 

return 0;

}