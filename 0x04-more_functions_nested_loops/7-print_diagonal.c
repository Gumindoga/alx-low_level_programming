#include "main.h"

/**
 * print_diagonal - draws a diagonal line
 * @n: integer
 * Return: void
 */

void print_diagonal(int n)
{
	int i;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 1; i <= n; i++)
		{
			int c;

			for (c = 1; c <= i; c++)
			{
				if (c < i)
				{
					_putchar(' ');
				}
				else
				{
					_putchar('\\');
				}
			}
			_putchar('\n');
		}
	}
}
