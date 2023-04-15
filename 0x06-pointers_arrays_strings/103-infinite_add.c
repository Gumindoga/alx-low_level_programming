#include <string.h>
#include "main.h"

/**
 * infinite_add - adds two numbers
 * @n1: first number
 * @n2: second number
 * @r: buffer to store result
 * @size_r: buffer size
 * Return: pointer to result or 0 if result cannot be stored in r
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int l1, l2, lr, carry = 0;

	l1 = strlen(n1);
	l2 = strlen(n2);
	lr = (l1 > l2 ? l1 : l2) + 1;
	if (lr + 1 > size_r)
		return (0);
	r[lr] = '\0';
	for (l1--, l2--, lr--; lr >= 0; l1--, l2--, lr--)
	{
		int d1 = (l1 >= 0 ? n1[l1] - '0' : 0);
		int d2 = (l2 >= 0 ? n2[l2] - '0' : 0);
		int sum = d1 + d2 + carry;

		carry = sum / 10;
		r[lr] = sum % 10 + '0';
	}
	if (*r == '0')
		return (r + 1);
	return (r);
}
