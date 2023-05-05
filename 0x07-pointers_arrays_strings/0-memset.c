#include "main.h"
/**
 * _memset - fills memory with a constant byte
 *
 * @s: first param
 * @b: second param
 * @n: third param
 *
 * Return: returns a char pointer
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		*(s + i) = b;
		i++;
	}

	return (s);
}
