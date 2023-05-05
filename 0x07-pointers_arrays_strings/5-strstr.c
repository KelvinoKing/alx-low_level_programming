#include "main.h"
#define NULL 0
/**
 * _strstr - Locates a substring
 *
 * @haystack: first param
 * @needle: second param
 *
 * Return: char or NULL
 */
char *_strstr(char *haystack, char *needle)
{
	int i = 0;
	char *start = haystack;

	if (!start || !needle || !*needle)
		return (start);

	while (*start)
	{
		if (*start == *needle)
		{
			for (i = 0; start[i] == needle[i]; i++)
			{
				if (!needle[i + 1])
					return (start);
			}
		}
		start++;
	}
	return (0);
}
