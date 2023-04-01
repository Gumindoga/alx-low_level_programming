#include <stdio.h>
#include "main.h"

/**
 * main - computes largest prime factor
 * Return: 0
 */

int main(void)
{
	long n = 612852475143;
	long i;

	for (i = 2; i <= n; i++)
	{
		if (n % i == 0)
		{
			while (n % i == 0)
			{
				n = n / i;
			}
		}
	}
	printf("%ld\n", i - 1);
	return (0);
}
