#include "main.h"

/**
 * print_square - draws a diagonal line
 * @size: integer size of square
 * Return: void
 */

void print_square(int size)
{
	int i;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 1; i <= size; i++)
		{
			int c;

			for (c = 1; c <= size; c++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
