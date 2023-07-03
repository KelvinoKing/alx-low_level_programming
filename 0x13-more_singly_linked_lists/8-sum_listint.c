#include "lists.h"
/**
 * sum_listint - return sum of all data(n) of a listint_t linked list
 * @head: pointer to head node
 *
 * Return: int
 */
int sum_listint(listint_t *head)
{
	listint_t *current;
	int sum = 0;

	current = head;

	while (current != NULL)
	{
		sum = sum + current->n;
		current = current->next;
	}
	return (sum);
}
