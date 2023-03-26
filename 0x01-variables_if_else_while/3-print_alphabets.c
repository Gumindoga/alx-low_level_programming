Here is an example of how you can write a program that prints the alphabet in lowercase and then in uppercase using only the putchar function and while loops:

#include <stdio.h>

/**
 * main - prints the alphabet in lowercase, and then in uppercase,
 * followed by a new line
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    char c = 'a';

    while (c <= 'z')
    {
        putchar(c);
        c++;
    }
    c = 'A';
    while (c <= 'Z')
    {
        putchar(c);
        c++;
    }
    putchar('\n');

    return (0);
}
