#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
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
			if (isdigit(*argv[i]))
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
