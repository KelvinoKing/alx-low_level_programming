#include "lists.h"
/**
 * free_listint - Frees a listint_t list
 * @head: pointer to head node
 *
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *current;

	while (head != NULL)
	{
		current = head->next;
		free(head);
		head = current;
	}
}
