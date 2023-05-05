#include "main.h"
/**
 * cap_string - Capitalizes words of a string
 *
 * @str: function parameter
 *
 * Return: char
 */
char *cap_string(char *str)
{
	int i, j;

	for (i = 0; str[i] != '\0'; i++)
	{
		j = i - 1;

		if (str[i] >= 97 && str[i] <= 122)
		{
			if (i == 0)
				str[i] = str[i] - 32;
			else if (str[j] >= 32 && str[j] <= 34)
				str[i] = str[i] - 32;
			else if (str[j] >= 9 && str[j] <= 10)
				str[i] = str[i] - 32;
			else if (str[j] >= 40 && str[j] <= 41)
				str[i] = str[i] - 32;
			else if (str[j] == 59)
				str[i] = str[i] - 32;
			else if (str[j] == 46)
				str[i] = str[i] - 32;
			else if (str[j] >= 123 && str[j] <= 125)
				str[i] = str[i] - 32;
			else if (str[j] == 63)
				str[i] = str[i] - 32;
		}
	}

	return (str);
}
