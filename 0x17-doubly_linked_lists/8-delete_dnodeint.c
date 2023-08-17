#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes a node at a specified index
 * @head: pointer to pointer of head node
 * @index: position of node to be deleted
 *
 * Return: int
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp, *current;
	unsigned int i = 0;

	if (*head == NULL || head == NULL)
		return (-1);
	current = *head;
	if (index == 0)
	{
		*head = current->next;
		free(current);
		if (*head != NULL)
			(*head)->prev = NULL;
		return (1);
	}
	current = *head;
	while (i < (index - 1))
	{
		if (current->next == NULL)
			return (-1);
		current = current->next;
		i++;
	}
	temp = current->next;
	current->next = current->next->next;
	current->next->next->prev = current->next;
	free(temp);
	return (1);
}
