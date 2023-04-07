#include "main.h"

/**
 * rev_string - prints string in reverse
 * @s: char element in string
 * Return: void
 */

void rev_string(char *s)
{
	int l;
	int i;
	char *t = "";

	l = 0;
	while (s[l] != '\0')
	{
		l++;
	}

	i = l - 1;
	while (i >= 0)
	{
		*t = *t + s[i];
		i--;
	}
	_putchar('\n');
}
