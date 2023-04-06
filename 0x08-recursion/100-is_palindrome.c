#include "main.h"

/**
 * palindrome_check - checks for palindrome
 * @s: char
 * @i: int start of string marker
 * @j: int end of string marker
 * Return: 1 if palindrome, 0 otherwise
 */

int check_palindrome(char *s, int i, int j)
{
	if (i >= j)
	{
		return (1);
	}
	if (s[i] != s[j])
	{
		return (0);
	}
	return check_palindrome(s, i + 1, j - 1);
}

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

	return (l + _strlen_recursion(s + 1));
}

/**
 * is_palindrome - checks for palindrome
 * @s: char
 * Return: 1 if palindrome, 0 otherwise
 */

int is_palindrome(char *s)
{
	int l = _strlen_recursion(s);
	return (check_palindrome(s, 0, l - 1));
}
