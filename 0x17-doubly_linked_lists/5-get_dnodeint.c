#include "lists.h"
/**
 * get_dnodeint_at_index - Returns the nth node of a listint_t linked list
 * @head: pointer to head node
 * @index: node index to be returned
 *
 * Return: pointer
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current;
	unsigned int i = 0;

	current = head;

	while (i < index)
	{
		if (current == NULL)
			return (NULL);
		current = current->next;
		i++;
	}
	return (current);
}
