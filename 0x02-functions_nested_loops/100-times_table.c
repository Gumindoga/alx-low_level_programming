#include "main.h"
/**
 * print_times_table - prints the n times table
 * @n: integer limit of times table
 */
void print_times_table(int n)
{
	int i, j, p;
	if ((n >= 0) && (n <= 15))
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				p = i * j;
				if ((j != 0) && (j < 10))
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
				}
				if ((j != 0) && ((j >= 10) && (j <= 100)))
				{
					_putchar(',');
					_putchar(' ');
				}
				if ((j != 0) && (j > 10))
					_putchar(',');
				if (p >= 100)
					_putchar(p / 100 + '0');
				if (p >= 10)
				{
					_putchar((p / 10) % 10 + '0');
					_putchar(p % 10 + '0');
				}
				else
				{
					if (j != 0)
						_putchar(' ');
					_putchar(p + '0');
				}
			}
			_putchar('\n');
		}
	}
}
