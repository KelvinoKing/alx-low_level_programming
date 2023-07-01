#include "lists.h"
/**
 * print_list - Prints all elements of a list_t list
 * @h: pointer to the first node in the list
 *
 * Return: int (number of nodes)
 */
size_t print_list(const list_t *h)
{
	list_t *current = h->next;
	int count = 0;

	if (h == NULL)
	{
		return (0);
	}
	else
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		count += 1;
	}

	while (current != NULL)
	{
		if (current->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%u] %s\n", current->len, current->str);
		}
		current = current->next;
		count++;
	}
	return (count);
}
