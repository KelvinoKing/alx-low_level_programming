#include "lists.h"
/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: pointer to pointer of head node
 * @idx: index of where to insert node
 * @n: value of data(n) of node
 *
 * Return: pointer of new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *current = NULL;
	listint_t *new_node;
	unsigned int i = 0;

	current = *head;
	while (i < (idx - 1))/*Loops till the node before the index*/
	{
		if (current->next == NULL)
			return (NULL);
		current = current->next;
		i++;
	}

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = current->next;
	current->next = new_node;

	return (new_node);
}
