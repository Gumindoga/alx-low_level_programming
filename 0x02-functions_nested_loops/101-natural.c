#include "main.h"
/**
 * sum_of_multiples - computes sum of multiples
 */

void sum_of_multiples(void)
{
	int sum;
	int i;

	for (i = 1; i < 1024; i++)
	{
		if (i % 3 == 0)
			sum = sum + i;
		if (i % 5 == 0)
			sum = sum + i;
	}
	_putchar(sum + '0');
	_putchar('\n');
}