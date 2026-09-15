#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
#define MAXX 12
#define MAXY 12
// rand function uses default see in its formula. In that case it will generate same sequence fo numbers 
//How can we cahneg the seed?
// usign srand()

//time (0) it returns the number of seconds passed since January 1 1970

// rand()%n will give you a random number between 0 to n-1 
// a + rand() % (b - a + 1) /// a-b inclusive 
// rand() % 10 = 0 to 9 // add 1  = 1 to 10

// GeNERATING RADNOM MULTIPLICATION
int main()
{
    srand(time(0));
    int x, y, user_answer;

    x = 1 + rand()%MAXX;
    y = 1 + rand()%MAXY

    printf("What is %d X %d = ");
    scanf("%d", &user_answer);

    int actual_asnwer = x*y;
    int diff = abs(user_answer - (x*y));

    if(user_answer > actaul_answer)
        printf("Your answer is %d more than the correct answer\n", diff);
    else if (user_answer < actual_answer)
        printf("Your anser is %d less than the correct answer\n", diff);
    else 
    printf("You are correct!\n");













    //srand(time(0));// change the seed 
    //int r = 10 + rand() % (100-10+1); //10 to 100
    


    //printf("%d\n", r);

    //r = rand();
    //printf("%d\n", r);


    //double x1, y1, x2, y2;
    //printf("Enter x,y for point 1: ");
    //scanf("%lf %lf", %x1, %y1);

    //printf("Enter x,y for point 2: ");
    //scanf("%lf %lf", %x2 , %y2);

   //double xdiff = x1 - x2;
    //double xdiffSq = pow(xdiff, 2);
    //double ydiff = y1 - y2;
    //double ydiffSq = pow(ydiff, 2);
    //double distance = sqrt(xdiffSq + ydiffSq);
    //double distance = sqrt(pow(x1-x2, 2) + pow(y1-y2, 2));

    //printf("The distance is %.2lf\n", distance);


    return 0;
}