/* 
* Name: Cali Andrews
* Date: September 2, 2026
* Lab: Average Score 
* 
* This program asks the user to enter five subject scores, 
* calculates the total score, and calculates the average score. 
*/
#include <stdio.h>

int main() 
{

    // Declare variables to store the five subject scores.
    float scores1, scores2, scores3, scores4, scores5;

    // Ask the user to enter five scores.
    printf("Enter the scores for 5 subjects separated by space: ");
    scanf("%f%f%f%f%f", &scores1, &scores2, &scores3, &scores4, &scores5);

    // Calculate the total of all five scores.
    float total = (scores1 + scores2 + scores3 + scores4 + scores5);

    printf("Total score: %f \n", total);

    // Calculate the average score.
    float percentage = total / 5;
    
    printf("Percentage: %f %%\n", percentage);

    return 0;

}