#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * checkDigits - checks if values entered are digits
 * @s: parameter
 *
 * Return: int
 */
int checkDigits(char *s)
{
	while (*s)
	{
		if (!isdigit(*s))
			return (0);
		s++;
	}
	return (1);
}

/**
 * main - Entry point of programe
 * @argc: number of arguments
 * @argv: array of argumnets
 *
 * Return: int
 */
int main(int argc, char *argv[])
{
	int sum = 0;
	int i;

	if (argc == 1)
	{
		printf("0\n");
	}
	else if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			if (checkDigits(argv[i]))
				sum += atoi(argv[i]);
			else
			{
				printf("Error\n");
				return (1);
			}
		}
		printf("%d\n", sum);
	}
	return (0);
}
