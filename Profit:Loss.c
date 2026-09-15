/* Name: Cali Andrews
Problem: Profit or Loss? 
Description: This program takes the cost price and selling price 
of an item and determines whether the seller made a profit or loss. 
It also displays the amount of profit or loss to two decimal places. 
Date: September 8, 2026
*/
#include <stdio.h>
int main()
{
    // Declare variables to store the cost price and selling price
    float a, b;

    // Ask the user to enter the cost price and selling price
    printf("Enter the cost price and selling price: \n");
    scanf("%f %f", &a, &b);

    // If the selling price is greater than the cost price, there is a profit
    if (b > a)
    {
        printf("You made a profit.\n");
        printf("The amount of profit is $%.2f\n", b-a);
    }

    // If the selling price is less than the cost price, there is a loss
    else if (b < a)
    {
        printf("You incurred loss.\n");
        printf("The amount of loss is $%.2f\n", a-b);
    }
    // If the prices are equal, nothing is displayed

    return 0;
}