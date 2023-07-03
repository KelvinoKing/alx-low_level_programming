#include "lists.h"
/**
 * get_nodeint_at_index - Returns the nth node of a listint_t linked list
 * @head: pointer to head node
 * @index: node index to be returned
 *
 * Return: pointer
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current;
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
