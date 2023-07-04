#include "lists.h"
/**
 * delete_nodeint_at_index - deletes the node at specified index of linked list
 * @head: pointer to pointer of head node
 * @index: the position of node to be deleted
 *
 * Return: 1 if it succeeded and -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current = NULL;
	listint_t *temp_node;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		current = (*head)->next;
		free(*head);
		*head = current;
		return (1);
	}
	current = *head;
	while (i < index - 1)
	{
		if (current->next == NULL)
			return (-1);
		current = current->next;
		i++;
	}
	temp_node = current->next;
	current->next = current->next->next;
	free(temp_node);
	return (1);
}
