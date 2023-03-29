#include "main.h"

/**
 * print_last_digit - prints last digit of a number
 * @n: integer
 * Return: last digit
 */

int print_last_digit(int n)
{
	int d = n % 10;
	_putchar(d);
	return (d);
}
