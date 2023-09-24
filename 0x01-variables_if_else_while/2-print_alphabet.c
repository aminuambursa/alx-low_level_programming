#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    char letter1 = 'a';
    char letter2 = '\n';

    putchar(letter1);

    while (letter1 < 'z')
    {
        letter1++;
        putchar(letter1);
    }

    putchar(letter2);

    return (0);
}
