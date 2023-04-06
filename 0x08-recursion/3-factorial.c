#include "main.h"

/**
 * factorial - calculates factorial of a number
 * @n: integer whose factorial is calculated
 * Return: factorial of given number
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
