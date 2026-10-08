/*2. Write a C program that implements a number guessing game. The computer should generate a
random number in the range 1 to 20 (inclusive). The program should repeatedly prompt the
player to enter a guess and then respond with one of the following messages:
• "Too high!" if the guess is greater than the secret number.
• "Too low!" if the guess is less than the secret number.
• "Congratulations!" if the guess is equal to the secret number.
The program must also count and display the total number of attempts it took for the player to
guess correctly.
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    // Seed the random number generator using the current time
    srand(time(0));
    
    // Generate a random number between 1 and 20 inclusive
    int secret_number = (rand() % 20) + 1;
    int guess;
    int attempts = 0;

    printf("Guess the secret number between 1 and 20!\n\n");

    while (1) {
        printf("Enter your guess: ");
        scanf("%d", &guess);
        attempts++; // Increment attempt counter

        if (guess > secret_number) {
            printf("Too high!\n\n");
        } else if (guess < secret_number) {
            printf("Too low!\n\n");
        } else {
            printf("Congratulations!\n");
            break; // Exit the loop when guessed correctly
        }
    }

    printf("Total number of attempts: %d\n", attempts);
    return 0;
}

