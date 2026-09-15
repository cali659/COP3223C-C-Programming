#include <stdio.h>
int main()
{
    int i;
    int numberOfScores;
    float score;
    float total = 0;
    
    printf("How many scores would you like to enter: \n");
    scanf("%d", &numberOfScores);
    for(i = 0; i < numberOfScores; i++)
    {
        printf("Enter a score: \n");
        scanf("%f", &score);

        total = total + score;
    }

    float average = total / numberOfScores; 
    printf("Total score: %f\n", total);
    printf("Average score: %f\n", average);
    return 0;
}