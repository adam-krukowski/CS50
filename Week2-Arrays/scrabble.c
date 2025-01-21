#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int POINTS[] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};

int score(string word)
{
    int total = 0;
    for (int i = 0; word[i]; i++)
        if (isalpha(word[i]))
            total += POINTS[toupper(word[i]) - 'A'];
    return total;
}

int main(void)
{
    string word1 = get_string("Player 1: ");
    string word2 = get_string("Player 2: ");
    int score1 = score(word1), score2 = score(word2);
    printf(score1 > score2 ? "Player 1 wins!\n" : score1 < score2 ? "Player 2 wins!\n" : "Tie!\n");
}
