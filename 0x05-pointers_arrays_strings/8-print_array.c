#include "main.h"
#include <stdio.h>

/**
 * print_array - prints array elements
 * @a: array with n elements
 * @n: int number of elements in array
 * Return: void
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d, ", a[i]);
	}

	_putchar('\n');
}
