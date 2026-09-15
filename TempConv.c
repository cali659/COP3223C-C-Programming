/* 
* Name: Cali Andrews
* Date: September 6, 2026
* Lab: Fahrenheit to Celsius Converter 
* 
* This program asks the user to enter the temperature in Fahrenheit, 
* and converts it to Celsius. 
*/
#include <stdio.h>
int main()
{
    float fahrenheit;
    float celsius;
    
    // Get temperature in Fahrenheit
    printf("Enter the temperature in Fahrenheit: ");
    scanf("%f", &fahrenheit);

    // Convert Fahrenheit to Celsius
    celsius = (fahrenheit - 32) * (5.0 / 9);

    // Display temperature in Celsius
    printf("The temperature in Celsius is: %f\n", celsius);

    return 0;

}