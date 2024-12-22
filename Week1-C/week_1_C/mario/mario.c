#include <stdio.h>

int main() {
    int height;

    // Ask the user for the height
    printf("Enter the height of the pyramid: ");
    // Read the input, no validation yet
    scanf("%d", &height);

    // Simple validation: check if height is greater than 0
    while (height <= 0) {
        printf("Please enter a positive number: ");
        scanf("%d", &height);
    }

    // Generate the pyramid
    for (int i = 1; i <= height; i++) {
        // Print spaces
        for (int j = i; j < height; j++) {
            printf(" ");
        }
        // Print hashes
        for (int k = 1; k <= i; k++) {
            printf("#");
        }
        // Move to the next line
        printf("\n");
    }

    return 0;
}
