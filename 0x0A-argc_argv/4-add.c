#include <stdio.h>
#include <stdlib.h>
/**
 * checkNum - Checks argument if its a number
 * @c: function param
 *
 * Return: int
 */
int checkNum(char *c)
{
	int i = 0;

	while (c[i] != '\0')
	{
		if (c[i] >= 48 && c[i] <= 57)
		{
			i++;
		}
		else
		{
			return (0);
		}
	}

	return (1);
}

/**
 * main - Entry point
 *
 * @argc: first param
 * @argv: second param
 *
 * Return: int
 */
int main(int argc, char *argv[])
{
	int i = 1;
	int num;
	int sum = 0;

	if (argc == 1)
		printf("0\n");
	else if (argc > 1)
	{
		while (i < argc)
		{
			num = checkNum(argv[i]);
			if (num == 1)
			{
				sum += atoi(argv[i]);
			}
			else
			{
				printf("Error\n");
				return (1);
			}

			i++;
		}
		printf("%d\n", sum);
	}

	return (0);
}
