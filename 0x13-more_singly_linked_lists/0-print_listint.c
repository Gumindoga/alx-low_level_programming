#include "lists.h"

/**
 * print_listint - prints all the elements of a listint_t list
 * @h: pointer to the head of the list
 * Return: the number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t count = 0;
	int n;

	while (h != NULL)
	{
		n = h->n;
		if (n < 0)
		{
			_putchar('-');
			n = -n;
		}
		if (n / 10)
			print_number(n / 10);
		_putchar(n % 10 + '0');
		_putchar('\n');
		h = h->next;
		count++;
	}
	return (count);
}

/**
 * print_number - prints an integer using only _putchar
 * @n: integer to print
 */

void print_number(int k)
{
	if (k < 0)
	{
		_putchar('-');
		k = -k;
	}
	if (k / 10)
		print_number(k / 10);
	_putchar(k % 10 + '0');
}
