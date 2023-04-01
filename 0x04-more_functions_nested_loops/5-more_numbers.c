#include "main.h"

/**
 * more_numbers - prints 0 to 14 10 times
 * Return: void
 */

void more_numbers(void)
{
	int i;

	for (i = 1; i <= 10; i++)
	{
		int c;

		for (c = 0; c <= 14; c++)
		{
			_putchar(c + '0');
		}
		_putchar('\n');
	}
	_putchar('\n');
}
