#include "lists.h"

/**
 * dlistint_len - Returns number of elements in a list
 * @h: pointer to head node
 *
 * Return: int
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;
	dlistint_t *current;

	if (h != NULL)
	{
		count++;
	}
	else
		return (0);

	current = h->next;
	while (current != NULL)
	{
		count++;
		current = current->next;
	}

	return (count);
}
