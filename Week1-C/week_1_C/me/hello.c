#include <stdio.h>

int main() {
    char name[100]; // stores the user's name

    printf("What's your name? ");
    fgets(name, sizeof(name), stdin);  // reads the name from input

    printf("hello, %s", name);

    return 0;
}
