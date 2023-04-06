#include "main.h"

/**
 * prime_check - checks if a number is prime
 * @n: integer to be checked
 * @i: integer factor of number
 * Return: 1 if prime, 0 if not
 */

int prime_check(int n, int i)
{
	if (n <= 1)
	{
		return (0);
	}
	if (i * i > n)
	{
		return (i);
	}
	if (n % i == 0)
	{
		return (0);
	}

	return (prime_check(n, i + 1));
}

/**
 * is_prime_number - checks if a number is prime
 * @n: integer to be checked
 * Return: 1 if prime, 0 if not
 */

int is_prime_number(int n)
{
	return (prime_check(n, 2));
}
