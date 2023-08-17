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

	while (h)
	{
		count++;
		h = h->next;
	}

	return (count);
}
/**
 * insert_dnodeint_at_index - Inserts a new node at a given position
 * @h: pointer to pointer of head node
 * @idx: position to add node
 * @n: data
 *
 * Return: pointer to new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *current, *new;
	unsigned int pos = 0;
	size_t len;

	if (h == NULL)
		return (NULL);
	if (idx == 0)
		return (add_dnodeint(h, n));

	len = dlistint_len(*h);
	if (idx == len - 1)
		return (add_dnodeint_end(h, n));

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	if (*h == NULL)
	{
		new->prev = NULL;
		new->next = NULL;
		*h = new;
		return (new);
	}
	current = *h;
	while (current)
	{
		if (pos == idx)
		{
			new->next = current;
			new->prev = current->prev;
			current->prev->next = new;
			current->prev = new;
			return (new);
		}
		current = current->next;
		pos++;
	}
	free(new);
	return (NULL);
}
