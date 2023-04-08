#include "main.h"
#include <limits.h>

/**
 * _atoi - converts string to integer
 * @s: char
 * Return: int equivalent of string
 */

int _atoi(char *s)
{
	int r;
	int sign;
	int i;

	r = 0;
	sign = 1;
	i = 0;
	while (s[i] != '\0' && (s[i] < '0' || s[i] > '9'))
	{
		if (s[i] == '-')
		{
			sign = sign * -1;
		}
		i++;
	}

	while (s[i] != '\0' && s[i] >= '0' && s[i] <= '9')
	{
		if (r < INT_MIN / 10 || (r == INT_MIN / 10 && s[i] - '0' > -(INT_MIN % 10)))
		{
			r = INT_MIN;
			return (r);
		}
		r = r * 10 - (s[i] - '0');
		i++;
	}

	if (sign == 1)
	{
		r = -r;
	}
	return (r);
}
