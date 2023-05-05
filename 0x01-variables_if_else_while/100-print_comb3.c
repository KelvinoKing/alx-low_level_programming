#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: Write a program that prints all
 * possible different combinations of two digits.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	unsigned int i = 0;
	unsigned int j = 1;

	while (i < 9)
	{
		j = i + 1;

		while (j < 10)
		{
			putchar(i + '0');
			putchar(j + '0');

			if (i != 8)
			{
				putchar(',');
				putchar(' ');
			}
			j++;
		}

		i++;
	}

	putchar('\n');

	return (0);
}
