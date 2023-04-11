
#include "main.h"

/**
 * _strspn - Entry point
 * @s: char
 * @accept: char
 * Return: Always 0 (Success)
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int n;
	int c;

	n = 0;
	while (*s)
	{
		for (c = 0; accept[c]; c++)
		{
			if (*s == accept[c])
			{
				n++;
				break;
			}
			else if (accept[c + 1] == '\0')
				return (n);
		}
		s++;
	}

	return (n);
}
