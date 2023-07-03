#include "lists.h"
/**
 * free_listint2 - Frees a listint_t list and sets head to NULL
 * @head: pointer to pointer of node
 *
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *current;

	while (*head != NULL)
	{
		current = (*head)->next;
		free(*head);
		*head = current;
	}
	*head = NULL;
}
