#include "main.h"

/**
 * _atoi - converts string to integer
 * @s: char
 * Return: int equivalent of string
 */

int _atoi(char *s)
{
	int res_int;
	int sign;
	int index;

	res_int = 0;
	sign = 1;
	index = 0;

	while (s[index] != '\0' && (s[index] < '0' || s[index] > '9'))
	{
		if (s[index] == '-')
		{
			sign = sign * -1;
		}
		index++;
	}

	while (s[index] != '\0' && s[index] >= '0' && s[index] <= '9')
	{
		res_int = res_int * 10 + (s[index] - '0');
		index++;
	}

	return (sign * res_int);
}