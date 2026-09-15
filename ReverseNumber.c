/* 
* Name: Cali Andrews 
* Date: September 9, 2026 
* Lab: Reverse the Number and Calculate the Sum of Digits 
* 
* This program asks the user to enter a five-digit number, 
* reverses the number, and calculates the sum of its digits. 
*/
#include <stdio.h>
int main ()
{

    // Declare variables for the number, individual digits, sum, and reversed number
    int number;
    int digit1, digit2, digit3, digit4, digit5;
    int sum;
    int reverse;

    // Ask the user to enter a five-digit number
    printf("Enter a five digit number: \n");
    scanf("%d", &number);

    // Extract each digit using the modulus and division operators
    digit5 = number % 10;
    number = number / 10;

    digit4 = number % 10;
    number = number / 10;

    digit3 = number % 10;
    number = number / 10;

    digit2 = number % 10;
    number = number / 10;

    digit1 = number % 10;

    // Calculate the sum of all five digits
    sum = digit1 + digit2 + digit3 + digit4 + digit5;

    // Generate the reversed number using the place values
    reverse = digit5 * 10000 + digit4 * 1000 + digit3 * 100 + digit2 * 10 + digit1;

    // Display the reversed number
    printf("Reverse Number: %d\n", reverse);

    // Display the digits and their sum
    printf("Sum of digits: %d + %d + %d + %d + %d = %d\n", digit1, digit2, digit3, digit4, digit5, sum);

        return 0;
}