#include "main.h"

/**
 * print_rev - prints string in reverse
 * @s: char element in string
 * Return: void
 */

void print_rev(char *s)
{
	int l;

	l = 0;
	while (s[l] != '\0')
	{
		l++;
	}

	int i;

	i = l - 1;
	while (i >= 0)
	{
		_putchar(s[i]);
		i--;
	}
	_putchar('\n');
}
