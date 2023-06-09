#include <stdio.h>
/**
 * main - Entry point of programe
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: int
 */
int main(int argc, char *argv[])
{
	if (argc > 0)
	{
		printf("%s\n", argv[0]);
	}
	return (0);
}
