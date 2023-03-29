#include "main.h"

/**
 * print_to_98 - prints natural numbers to 98
 * @n: starting point integer
 */

void print_to_98(int n)
{
	int i;

	for (i = n; i <= 98; i++)
	{
		if (i != n)
		{
			_putchar(',');
			_putchar(' ');
		}
		if (i > 9)
		{
			_putchar(i / 10 + '0');
			_putchar(i % 10 + '0');
		}
		else
			_putchar(i + '0');
	}
}
