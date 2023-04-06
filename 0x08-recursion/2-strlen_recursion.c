#include "main.h"

/**
 * _strlen_recursion - returns the length of a string
 * @s: char
 * Return: length of string
 */

int _strlen_recursion(char *s)
{
	int l = 1;

	if (*s == '\0')
	{
		return (0);
	}

	return l + _strlen_recursion(s + 1);
}
