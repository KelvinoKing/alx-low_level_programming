#include "lists.h"
/**
 * add_nodeint_end - Adds a new node at the end of listint_t list
 * @head: pointer to head of node
 * @n: int parameter
 *
 * Return: pointer to new node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node;
	listint_t *current_node;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	current_node = *head;
	while (current_node->next != NULL)
	{
		current_node = current_node->next;
	}
	current_node->next = new_node;
	return (new_node);
}
