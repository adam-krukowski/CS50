#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int main(int argc, string argv[])
{
    // Check if there is exactly one command-line argument
    if (argc != 2)
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }

    // Validate that the key is numeric
    for (int i = 0; argv[1][i] != '\0'; i++)
    {
        if (!isdigit(argv[1][i]))
        {
            printf("Usage: ./caesar key\n");
            return 1;
        }
    }

    // Convert the key to an integer
    int key = atoi(argv[1]) % 26;

    // Prompt the user for plaintext
    string plaintext = get_string("plaintext:  ");
    printf("ciphertext: ");

    // Encrypt the plaintext
    for (int i = 0; plaintext[i] != '\0'; i++)
    {
        char c = plaintext[i];

        // Check if the character is an uppercase letter
        if (isupper(c))
        {
            printf("%c", (c - 'A' + key) % 26 + 'A');
        }
        // Check if the character is a lowercase letter
        else if (islower(c))
        {
            printf("%c", (c - 'a' + key) % 26 + 'a');
        }
        else
        {
            // Non-alphabetical characters remain unchanged
            printf("%c", c);
        }
    }

    // Print a newline after ciphertext
    printf("\n");
    return 0;
}
