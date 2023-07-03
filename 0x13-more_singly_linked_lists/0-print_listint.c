#include "lists.h"
/**
 * print_listint - prints all the elements of a listint_t list
 * @h: pointer to the head node
 *
 * Return: int (number of nodes)
 */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;
	listint_t *current;

	if (h == NULL)
		return (0);
	current = h->next;
	printf("%d\n", h->n);
	count++;

	while (current != NULL)
	{
		printf("%d\n", current->n);
		current = current->next;
		count++;
	}
	return (count);
}
