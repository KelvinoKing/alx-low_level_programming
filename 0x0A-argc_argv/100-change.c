#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point of programme
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: int
 */
int main(int argc, char *argv[])
{
	int cent = 0, totalCoins = 0;
	int counter[5] = {25, 10, 5, 2, 1};
	int i;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	cent = atoi(argv[1]);

	if (cent < 0)
		printf("0\n");
	else
	{
		for (i = 0; i < 5; i++)
		{
			if (cent >= counter[i])
			{
				totalCoins += cent / counter[i];
				cent = cent % counter[i];
			}
		}
		printf("%d\n", totalCoins);
	}
	return (0);
}
