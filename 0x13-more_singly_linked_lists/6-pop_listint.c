#include "lists.h"
/**
 * pop_listint - Deletes head node and return the head node's data
 * @head: pointer to pointer of head node
 *
 * Return: the head node's data (int)
 */
int pop_listint(listint_t **head)
{
	listint_t *temp_node;
	int j;

	if (*head == NULL)
		return (0);

	temp_node = (*head)->next;
	j = (*head)->n;
	free(*head);
	*head = temp_node;

	return (j);
}
