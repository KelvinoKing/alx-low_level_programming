#include <stdio.h>
/**
 * main - Entry point to programme
 * @argc: number of arguments entered
 * @argv: array of arguments
 *
 * Return: int
 */
int main(int argc, char *argv[])
{
	int i = 0;
	if (argc > 0)
	{
		for (i = 0; i < argc; i++)
			printf("%s\n", argv[i]);
	}
	return (0);
}
