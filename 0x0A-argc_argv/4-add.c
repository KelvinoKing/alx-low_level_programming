#include <stdio.h>
#include <stdlib.h>
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
			if (*argv[i] >= 48 && *argv[i] <= 57)
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
