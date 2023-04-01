#include "main.h"

/**
 * print_triangle - draws a triangle
 * @size: integer size of square
 * Return: void
 */

void print_triangle(int size)
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
			int j;

			for (c = size - 1; c >= 0; c--)
			{
				_putchar(' ');
			}
			for (j = 1; j <= size; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
