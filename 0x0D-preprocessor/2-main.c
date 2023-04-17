#include "main.h"

/**
 * main - writes the name of the file it was compiled from
 * Return: 0 always
 */

int main(void)
{
	char *str = __FILE__;

	while (*str)
	{
		_putchar(*str);
		str++;
	}

	_putchar('\n');
	return (0);
}
