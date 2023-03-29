#include "main.h"

/**
 * jack_bauer - prints every minute of the day
 */

void jack_bauer(void)
{
	int h;
	int m;

	for (h = 0; h < 24; h++)
	{
		for (m = 0; m < 60; m++)
		{
			_putchar('0' + h);
			_putchar(':');
			_putchar('0' + m);
			_putchar('\n');
		}
	}
}
