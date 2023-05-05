#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: computes and prints the sum of all the multiples of 3 or 5
 * below 1024 (excluded), followed by a new line
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int sum = 0;
	int i;
	int MAX_VALUE = 1024;

	for (i = 0; i < MAX_VALUE; i++)
	{
		if ((i % 3) == 0 || (i % 5) == 0)
		{
			sum += i;
		}
	}
	printf("%d\n", sum);

	return (0);
}
