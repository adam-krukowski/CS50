#include <stdio.h>

int main(void) {
    int change;
    int coins = 0;

    // asks for the amount of change owed
    printf("Change owed: ");
    while (scanf("%d", &change) != 1 || change < 0) {

        // Clear invalid input from buffer
        while (getchar() != '\n');
        printf("Please enter a positive amount: ");
    }

    // calculates the minimum number of coins
    coins += change / 25;  // Quarters
    change %= 25;

    coins += change / 10;   // Dimes
    change %= 10;

    coins += change / 5;    // Nickels
    change %= 5;

    coins += change;        // Pennies

    // result
    printf("%d\n", coins);

    return 0;
}
