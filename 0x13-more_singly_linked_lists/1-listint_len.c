#include "lists.h"
/**
 * listint_len - Returns the number of nodes in a linked list
 * @h: pointer to the first node in the list
 *
 * Return: int
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;
	listint_t *current;

	if (h == NULL)
		return (0);
	current = h->next;
	count++;
	while (current != NULL)
	{
		count++;
		current = current->next;
	}
	return (count);
}
