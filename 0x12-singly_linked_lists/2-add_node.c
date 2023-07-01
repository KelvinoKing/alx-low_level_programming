#include "lists.h"
/**
 * add_node - Adds a new node at beginning of a list_t list
 * @head: pointer to a pointer of head node
 * @str: String to be used in new node
 *
 * Return: pointer to new node
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *temp_node;

	if (head == NULL)
		return (NULL);

	temp_node = malloc(sizeof(list_t));
	if (temp_node == NULL)
		return (NULL);

	if (str != NULL)
	{
		temp_node->str = strdup(str);
		temp_node->len = strlen(temp_node->str);
	}
	temp_node->next = *head;
	*head = temp_node;

	return (temp_node);
}
