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
			printf("%ld", i);
			if (n == i)
			{
				putchar('\n');
			}
			else
			{
				putchar('*');
				n /= i;
				i--;
			}
		}
	}
	return (0);
}
