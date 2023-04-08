#include "main.h"
#include <limits.h>

/**
 * _atoi - converts string to integer
 * @s: char
 * Return: int equivalent of string
 */

int _atoi(char *s)
{
	int res;
	int sign;
	int i;

	res = 0;
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
		if (res < INT_MIN / 10 || (res == INT_MIN / 10 && s[i] - '0' > -(INT_MIN % 10)))
		{
			res = INT_MIN;
			return (res);
		}
		res = res * 10 - (s[i] - '0');
		i++;
	}

	if (sign == 1)
	{
		res = -res;
	}
	return (res);
}
