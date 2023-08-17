#include "lists.h"

/**
 * add_dnodeint - Adds a new node at the beginning of a dlistint_t
 * @head: pointer to pointer of head node
 * @n: element
 *
 * Return: pointer to new node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;

	if (*head == NULL)
	{
		new->prev = NULL;
		new->next = NULL;
		*head = new;
		return (new);
	}
	new->prev = NULL;
	new->next = *head;
	*head = new;

	return (new);
}
