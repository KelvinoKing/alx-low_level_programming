#include "lists.h"
/**
 * free_list - Frees a list_t list
 * @head: pointer to head node of a list
 *
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *current;

	while (head != NULL)
	{
		current = head->next;
		free(head->str);
		free(head);
		head = current;
	}
}
