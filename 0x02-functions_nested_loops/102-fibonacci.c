#include <stdio.h>
#include "main.h"

/**
 * main - prints the fibonacci sequence
 * Return: 0
 */

int main(void)
{
	long int a;
	long int b;
	int count;
	long int temp;

	a = 1;
	b = 2;

	printf("%ld, ", a);

	for (count = 1; count <= 49; count++)
	{
		if (count == 49)
			printf("%ld", b);
		else
		{
			printf("%ld, ", b);
			temp = a;
			a = b;
			b = temp + b;
		}
	}
	printf("\n");
	return (0);
}
