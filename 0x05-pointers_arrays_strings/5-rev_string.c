#include "main.h"
/**
 * rev_string - Reverses a string
 *
 * @s: Function parameter
 *
 * Return: void
 */
void rev_string(char *s)
{
	int i = 0;
	int count = 0;
	char tmp = *(s + 0);

	while (*(s + i) != '\0')
	{
		count++;
		i++;
	}

	for (i = 0; i < count; i++)
	{
		tmp = *(s + i);
		count--;
		*(s + i) = *(s + count);
		*(s + count) = tmp;
	}
}
