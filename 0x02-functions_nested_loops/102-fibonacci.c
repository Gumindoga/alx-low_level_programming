#include <stdio.h>
#include "main.h"

/**
 * main - prints the fibonacci sequence
 * Return: 0
 */

int main(void)
{
	int a;
	int b;
	int count;
	int temp;

	a = 1;
	b = 2;

	printf("%d", a);

	for (count = 1; count <= 49; count++)
	{
		printf("%d, ", b);
		temp = a;
		a = b;
		b = temp + b;
	}
	printf("\n");
	return (0);
}