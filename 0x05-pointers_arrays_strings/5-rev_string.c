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
	char temp;

	l = 0;
	while (s[l] != '\0')
	{
		l++;
	}

	temp = ' ';
	i = 0;
	while (i < l / 2)
	{
		temp = s[i];
		s[i] = s[l - i - 1];
		s[l - i - 1] = temp;
		i++;
	}
}
