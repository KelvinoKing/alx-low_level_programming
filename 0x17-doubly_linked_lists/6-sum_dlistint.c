#include "lists.h"

/**
 * sum_dlistint - Returns the sum of all the data(n) of dlistint_t list
 * @head: pointer to head node
 *
 * Return: int
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *current;
	int sum;

	if (head == NULL)
		return (0);
	current = head;
	sum = 0;
	while (current)
	{
		sum += current->n;
		current = current->next;
	}
	return (sum);
}
