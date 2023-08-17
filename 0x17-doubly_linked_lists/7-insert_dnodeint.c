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

	if (idx == 0)
		return (add_dnodeint(h, n));

	len = dlistint_len(*h);
	if (idx == len - 1)
		return (add_dnodeint_end(h, n));

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;

	current = *h;
	while (pos < (idx - 1))
	{
		if (current->next == NULL)
			return (NULL);
		current = current->next;
		pos++;
	}
	new->prev = current->next->prev;
	new->next = current->next;
	current->next = new;
	current->next->prev = new;

	return (new);
}
