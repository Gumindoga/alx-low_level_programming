#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_listint_safe - frees a listint_t list
 * @h: double pointer to the head of the listint_t list
 * Return: the size of the list that was freed
 */

size_t free_listint_safe(listint_t **h)
{
	size_t count = 0;
	listint_t *slow, *fast, *prev;

	if (h == NULL || *h == NULL)
		return (count);

	slow = *h;
	fast = *h;

	while (slow != NULL && fast != NULL && fast->next != NULL)
	{
		prev = slow;
		slow = slow->next;
		fast = fast->next->next;
		count++;

		if (slow == fast)
		{
			prev->next = NULL;
			break;
		}
	}

	while (*h != NULL)
	{
		prev = *h;
		*h = (*h)->next;
		free(prev);
		count++;
	}

	*h = NULL;

	return (count);
}
