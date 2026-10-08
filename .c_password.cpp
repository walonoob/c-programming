/*A password system requires the user to enter the correct password "1234" to log in. Using a
do while loop, write a program that keeps prompting the user for the password until the
correct one is entered. Once correct, display "Access Granted".
*/

#include <stdio.h>

int main() {
    int password;

    // The loop body executes at least once before checking the condition
    do {
        printf("Enter password: ");
        scanf("%d", &password);
    } while (password != 1234);

    printf("Access Granted\n");
    return 0;
}

