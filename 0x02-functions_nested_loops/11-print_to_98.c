#include "main.h"

/**
 * print_to_98 - prints natural numbers to 98
 * @n: starting point integer
 */

void print_to_98(int n)
{
	int i;

	if (n > 98)
	{
		for (i = n; i >= 98; i--)
		{
			if (i != n)
			{
				_putchar(',');
				_putchar(' ');
			}
			if (i >= 10)
			{
				_putchar(i / 10 + '0');
				_putchar(i % 10 + '0');
			}
			else
				_putchar(i + '0');
		}
		_putchar('\n');
	}
	else
	{
		for (i = n; i <= 98; i++)
		{
			if (i != n)
			{
				_putchar(',');
				_putchar(' ');
			}
			if (n < 0)
			{
				_putchar('-');
				if (n <= -10)
					_putchar(-(n / 10) + '0');
				_putchar(-(n % 10) + '0');
			}
			if (i >= 10)
			{
				_putchar(i / 10 + '0');
				_putchar(i % 10 + '0');
			}
			else
				_putchar(i + '0');
		}
		_putchar('\n');
	}
}
