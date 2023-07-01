#include "lists.h"
#include <stdio.h>
/**
 * _strlen - Returns the length of a string
 *
 * @s: Function parameter
 *
 * Return: int
 */
int _strlen(const char *s)
{
	int i = 0;
	int count = 0;

	while (*(s + i) != '\0')
	{
		count++;
		i++;
	}

	return (count);
}
/**
 * add_node_end - Adds a new node at the end of a list_t list
 * @head: pointer to the head node
 * @str: pointer to string
 *
 * Return: pointer to added node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *current_node;
	list_t *new_node;

	current_node = *head;
	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);
	if (str != NULL)
	{
		new_node->str = strdup(str);
		new_node->len = _strlen(str);
	}
	new_node->next = NULL;
	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}
	while (current_node->next != NULL)
	{
		current_node = current_node->next;
	}
	current_node->next = new_node;
	return (new_node);
}
