#include <stdio.h>
#include "main.h"

/**
 * sum_of_multiples - computes sum of multiples
 */

void sum_of_multiples(void)
{
	int sum;
	int i;

	for (i = 0; i < 1024; i++)
	{
		if (i % 3 == 0)
			sum = sum + i;
		if (i % 5 == 0)
			sum = sum + i;
	}
	printf('%d \n', sum);
}