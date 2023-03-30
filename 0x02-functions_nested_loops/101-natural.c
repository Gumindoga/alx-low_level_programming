#include <stdio.h>
#include "main.h"

/**
 * main - computes sum of multiples
 * Return: 0
 */

int main(void)
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
	printf("%d\n")
	return (sum);
}
