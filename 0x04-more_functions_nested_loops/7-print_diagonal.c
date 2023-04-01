#include "main.h"

/**
 * print_diagonal - draws a diagonal line
 * @n: integer
 * Return: void
 */

void print_diagonal(int n)
{
	int i;

	for (i = 1; i <= n; i++)
	{
		int c;

		for (c = 1; c <= i; c++)
		{
			_putchar('\\');
		}
		_putchar('\n');
	}
}
