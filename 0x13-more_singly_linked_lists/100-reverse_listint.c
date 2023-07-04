#include "lists.h"
/**
 * reverse_listint - Reverses a listint_t linked list
 * @head: pointer to pointer head node
 *
 * Return: pointer to first node of reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *next;
	listint_t *previous;

	previous = NULL;
	while (*head)
	{
		next = (*head)->next;
		(*head)->next = previous;
		previous = *head;
		*head = next;
	}
	*head = previous;
	return (*head);
}
