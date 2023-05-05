#include "main.h"
/**
 * rot13 - Encodes a string using rot 13
 *
 * @str: Function argument
 *
 * Return: char
 */
char *rot13(char *str)
{
	int i, j;

	char array1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char array2[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (str[i] == array1[j])
			{
				str[i] = array2[j];
				break;
			}
		}
	}

	return (str);
}
