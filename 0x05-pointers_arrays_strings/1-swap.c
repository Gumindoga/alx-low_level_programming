#include "main.h"

/**
 * swap_int - swaps values of two integers
 * @a: first int
 * @b: second int
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int temp_holder;

	temp_holder = *b;
	*b = *a;
	*a = temp_holder;
}
