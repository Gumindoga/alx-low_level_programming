#include "main.h"

/**
 * times_table - prints the 9 times table
 */

void times_table(void)
{
	int i;
	int j;
	int p;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			p = i * j;
			if (j != 0)
			{
				_putchar(',');
				_putchar(' ');
			}
			if (p >= 10)
			{
				_putchar(p / 10 + '0');
				_putchar(p % 10 + '0');
			}
			else
			{
				if (j != 0)
					_putchar(' ');
				_putchar(p + '0');
			}
		}
		_putchar('\n')
	}
}
