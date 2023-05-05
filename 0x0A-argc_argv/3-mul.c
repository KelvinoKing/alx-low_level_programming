#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 *
 * @argc: first param
 * @argv: second param
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int mul;

	if (argc < 3 || argc > 3)
		printf("Error\n");
	else
	{
		mul = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", mul);
	}

	return (0);
}
