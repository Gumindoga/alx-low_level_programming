#include "main.h"

/**
 * puts_half - prints half of a string + new line
 * @str: char element in string
 * Return: void
 */

void puts_half(char *str)
{
	int l;

	l = 0;
	while (*str == '\0')
	{
		l++;
		str++;
	}

	for (int n = (l - 1) / 2; n <= l - 1; n++)
	{
		_putchar(str[n]);
	}

	_putchar('\n');
}