/*1. A bank ATM allows withdrawals as long as the account balance is greater than 0. Write a
program using a while loop where the user enters the amount to withdraw until the
balance becomes zero or negative. Display the balance after each withdrawal.
*/



#include <stdio.h>

int main() {
    // Loop from 100 down to 50
    for (int i = 100; i >= 50; i--) {
        printf("%d\n", i);
    }
    
    return 0;
}

