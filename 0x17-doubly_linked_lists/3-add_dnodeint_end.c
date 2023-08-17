#include "lists.h"

/**
 * add_dnodeint_end - Adds a new node at the end of a list
 * @head: pointer to pointer of head node
 * @n: element data
 *
 * Return: pointer to new node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *current;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (*head == NULL)
	{
		new->prev = NULL;
		*head = new;
		return (new);
	}
	current = *head;
	while (current->next != NULL)
		current = current->next;
	new->prev = current;
	current->next = new;

	return (new);
}
