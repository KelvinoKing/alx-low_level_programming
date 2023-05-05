#include "main.h"
/**
 * _memcpy - Copies memory area
 *
 * @dest: first param
 * @src: second param
 * @n: third param
 *
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		*(dest + i) = *(src + i);
		i++;
	}

	return (dest);
}
