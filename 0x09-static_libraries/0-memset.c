#include "main.h"

/**
 * _memset - fills a block of memory with a specific value
 * @s: char starting of address
 * @b: char value to fill
 * @n: int number of values to change
 * Return: new array with new value of n bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; n > 0; i++)
	{
		s[i] = b;
		n--;
	}

	return (s);
}
