#include <stdio.h>
int main() 
{
    int join_year, curr_year;
    printf("Enter the joining year and current year: \n");
    scanf("%d %d", &join_year, &curr_year);

int duration = curr_year - join_year;

    if(duration >=10)
    printf("10k bonus\n");
    else if (duration >=5)
    printf("5k bonus\n");
    else
    printf("No bonus\n");

    return 0;
}