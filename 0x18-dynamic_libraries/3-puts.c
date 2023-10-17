#include "main.h"

/**
 * _puts - prints a string to the stdout + new line
 * @str: char element in string
 * Return: void
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}

	_putchar('\n');
}
