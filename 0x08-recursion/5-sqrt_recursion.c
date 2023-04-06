#include "main.h"

/**
 * _sqrt_recursion - returns natural square root of a number
 * _sqrt - determines if number has a root, and calculates the root if any
 * @n: integer whose natural sqrt is calculated
 * @i: integer potential root
 * Return: natural sqrt
 */

int _sqrt(int n, int i)
{
	if (i * i > n)
	{
		return (-1);
	}
	if (i * i == n)
	{
		return (i);
	}

	return _sqrt(n, i++);
}

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}

	return (_sqrt(n, 0));
}
