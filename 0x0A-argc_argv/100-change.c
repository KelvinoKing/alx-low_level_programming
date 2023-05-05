#include <stdlib.h>
#include <stdio.h>
/**
 * getMin - get minimum number of coins
 *
 * @argument: function param
 *
 * Return: int
 */
int getMin(int argument)
{
	int val25 = 0, val10 = 0, val5 = 0, val2 = 0, val1 = 0;
	int minCoins = 0;

	while (argument > 0)
	{
		if (argument >= 25)
		{
			argument -= 25;
			val25++;
		}
		else if (argument >= 10)
		{
			argument -= 10;
			val10++;
		}
		else if (argument >= 5)
		{
			argument -= 5;
			val5++;
		}
		else if (argument >= 2)
		{
			argument -= 2;
			val2++;
		}
		else
		{
			argument -= 1;
			val1++;
		}
	}
	minCoins = val25 + val10 + val5 + val2 + val1;
	return (minCoins);
}
/**
 * main - Entry point
 *
 * @argc: number of arguments
 * @argv: array of arguments passed
 *
 * Return: int
 */
int main(int argc, char *argv[])
{
	int argument;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	if (atoi(argv[1]) < 0)
	{
		printf("0\n");
	}
	else
	{
		argument = getMin(atoi(argv[1]));
		printf("%d\n", argument);
	}
	return (0);
}
