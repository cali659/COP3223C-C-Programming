#include <stdio.h>
int main ()
{


    //int a = 5, b = 10;

    //printf("%d\n", a==b);
    //printf("%d\n", a!=b);
    //printf("%d\n", b>=(a+5));

    int score;
    scanf("%d", &score);

    if(score >=60)
    {
    printf("Pass\n");
    printf("congratulations!\n");
    }

     else
     {
    printf("Fail\n");
    printf("Try Again\n");
     }


    return 0;

}