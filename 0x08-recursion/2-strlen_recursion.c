#include "main.h"

/**
 * _strlen_recursion - returns the length of a string
 * @s: char
 * Return: length of string
 */

int _strlen_recursion(char *s)
{
	int l;

	if (*s == '\0')
	{
		return l;
	}

	l++;
	_strlen_recursion(s + 1);
}
