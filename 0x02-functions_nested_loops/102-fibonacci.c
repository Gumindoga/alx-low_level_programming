#include <stdio.h>
#include "main.h"

/**
 * main - prints the fibonacci sequence
 * Return: 0
 */

int main(void)
{
	long long int a;
	long long int b;
	int count;
	long long int temp;

	a = 1;
	b = 2;

	printf("%d, ", a);

	for (count = 1; count <= 49; count++)
	{
		if (count == 49)
			printf("%d", count)
		else
		{
			printf("%d, ", b);
			temp = a;
			a = b;
			b = temp + b;
		}
	}
	printf("\n");
	return (0);
}
