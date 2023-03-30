#include <stdio.h>
#include "main.h"

/**
 * main - calculates sum of even fibonacci elements
 * Return: 0
 */

int main(void)
{
	long int a;
	long int b;
	long int sum;
	long int temp;

	a = 1;
	b = 2;
	sum = 0;

	while (b < 4000000)
	{
		if (b % 2 == 0)
			sum = b + sum;
		temp = a;
		a = b;
		b = temp + b;
	}
	printf("%ld\n", sum);
	return (0);
}
