#include "main.h"
/**
 * _strncat - Concatenates two strings
 *
 * @dest: first param
 * @src: second param
 * @n: third param
 *
 * Return: pointer to resulting dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int count = 0;

	while (dest[i] != '\0')
	{
		count++;
		i++;
	}

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[count + i] = src[i];
	}

	return (dest);
}
