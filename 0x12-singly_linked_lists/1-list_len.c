#include "lists.h"
/**
 * list_len - Returns the number of elements in a linked list_t list
 * @h: pointer to first node
 *
 * Return: size_t
 */
size_t list_len(const list_t *h)
{
	list_t *current;
	size_t count = 0;

	if (h == NULL)
		return (0);
	count = 1;
	current = h->next;
	while (current != NULL)
	{
		count = count + 1;
		current = current->next;
	}
	return (count);
}
