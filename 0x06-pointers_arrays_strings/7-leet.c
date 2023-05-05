#include "main.h"
/**
 * leet - Encodes a string into 1337
 *
 * @str: Functions parameter
 *
 * Return: char
 */
char *leet(char *str)
{
	int i, j;

	char array[] = {'a', 'e', 'o', 't', 'l'};
	char nums[] = {'4', '3', '0', '7', '1'};

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j < 5; j++)
		{
			if (str[i] == array[j] || str[i] == array[j] - 32)
			{
				str[i] = nums[j];
				break;
			}
		}
	}

	return (str);
}
