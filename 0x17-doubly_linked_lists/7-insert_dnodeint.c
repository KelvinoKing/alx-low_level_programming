#include "lists.h"
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

	if (idx == 0 || *h == NULL)
	{
		new = add_dnodeint(h, n);
		return (new);
	}
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
