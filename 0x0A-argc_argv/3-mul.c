#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point of programme
 * @argc: number of params
 * @argv: array of arguments
 *
 * Return: int
 */
int main(int argc, char *argv[])
{
	int ans;
	int i, j;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	i = atoi(argv[1]);
	j = atoi(argv[2]);
	ans = i * j;
	printf("%d\n", ans);
	return (0);
}
