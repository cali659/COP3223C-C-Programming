/*
short circuite evaluation 

*/
#include <stdio.h>
int main(void)
{

int n;
scanf("%d", &n);
    n%2 ? printf("ODD") : printf("EVEN");
 /*  
    char ms, gender;
    int age;

    printf("Enter marital status (m/u), and gender (m/f), age: \n");
    scanf("%c %c %d", &ms, &gender, &age);
// easier way is to do the || at the top instead of having to write else if and statements 
    if((ms == 'm')) || (ms == 'u' && gender == 'm' && age >= 30) || (ms == 'u' && gender == 'm' && age >= 25)
        printf("You will get insurance!\n");
    //else if (ms == 'u' && gender == 'm' && age >= 30)
        //printf("You will get insurance!\n");
    //else if (ms == 'u' && gender == 'm' && age >= 25)
       // printf("You will get insurance!\n");
    else 
        printf("No insurance!\n");
        
    return 0;
    */
}



/*
int score = 75;
    
   if (score> 80 && score++)
   printf("hello %d", score++);
   else
   printf("hi %d", score--);
   */
/*{
int score = 75;
    
    if(score>=90)
    printf("You got A");
    else if ((score<90) && (score>=80))
    printf("You got B");
    else if ((score<80) && (score>=70))
    printf("You got C");
    else if ((score<70) && (score>=60))
    printf("You got D");
    else
    printf("You got F");
    return 0;
}
    */