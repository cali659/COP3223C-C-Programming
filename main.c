/* 
* Name: Cali Andrews
* Date: September 13, 2026
* Lab: Age Compare 
* 
* This program asks the user to enter the ages of three people,
* and determines which person is the youngest.
*/
#include <stdio.h>
int main() 
{
    // Declare variables to store the ages of the three people
    int a, b, c;

    // Ask the user to enter the three ages
    printf("Enter ages of three people (person 1, person 2, and person 3): \n");
    // Get the three ages from the user
    scanf("%d %d %d", &a, &b, &c);

    // Check if person 1 is younger than both person 2 AND person 3
    if (a < b && a < c)
    {
        printf("Person 1 is youngest\n");
    }
    // If person 1 is not the youngest, check if person 2 is younger 
    // than both person 1 AND person 3
    else if (b < a && b < c)
    {
        printf("Person 2 is youngest\n");
    }
    // If neither person 1 nor person 2 is the youngest, 
    // person 3 must be the youngest
    else
    {
        printf("Person 3 is youngest\n");
    }

}