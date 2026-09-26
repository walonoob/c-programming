// program with user input
/*Write a C program that prompts the user to enter the following details:
i. Height (in meters or centimeters)
ii. Bank balance (in Kenya shillings )
iii. Phone number
After collecting the inputs, the program should display the values back to the user in a clear
and formatted manner.
Note: Use appropriate data types for each input (e.g., float for height, double for bank
balance, int or long or string handling for phone numbers). Ensure your code is error-free
and well-indented.*/


#include <stdio.h>

int main() {
    // Variable declarations with appropriate data types
    float height;
    double bankBalance;
    char phoneNumber[20]; // Character array to preserve leading zeros and formatting

    printf("=========================================\n");
    printf("         USER DETAILS COLLECTOR          \n");
    printf("=========================================\n\n");

    // 1. Prompting for Height
    printf("Enter your height (e.g., in meters or cm): ");
    scanf("%f", &height);

    // 2. Prompting for Bank Balance
    printf("Enter your bank balance (in Kenya Shillings): ");
    scanf("%lf", &bankBalance);

    // 3. Prompting for Phone Number
    printf("Enter your phone number: ");
    scanf("%s", phoneNumber);

    // Displaying the formatted output
    printf("\n=========================================\n");
    printf("           DISPLAYING DETAILS            \n");
    printf("=========================================\n");
    printf("Height       : %.2f\n", height);
    printf("Bank Balance : KSh %.2lf\n", bankBalance);
    printf("Phone Number : %s\n", phoneNumber);
    printf("=========================================\n");

    return 0;
}

