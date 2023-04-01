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
		for (i = 1; i >= size; i++)
		{
			int j;
			int h;

			for (h = i; h >= 0; h--)
			{
				_putchar(' ');
			}

			for (j = 1; j <= i; j++)
			{
				_putchar('#');
			}

			_putchar('\n');
		}
	}
}