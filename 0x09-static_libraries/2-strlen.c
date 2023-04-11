#include "main.h"

/**
 * _strlen - returns length of string
 * @s: char element in string
 * Return: length of string
 */

int _strlen(char *s)
{
	int l;

	l = 0;

	while (*s != '\0')
	{
		l = l + 1;
		s = s + 1;
	}

	return (l);
}
