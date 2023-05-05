#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: Write a program that prints all possible
 * different combinations of three digits.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	unsigned int i = 0;
	unsigned int j = 1;
	unsigned int k = 2;

	while (i < 8)
	{
		j = i + 1;

		while (j < 9)
		{
			k = j + 1;

			while (k < 10)
			{
				putchar(i + '0');
				putchar(j + '0');
				putchar(k + '0');

				if (!(i == 7 && j == 8 && k == 9))
				{
					putchar(',');
					putchar(' ');
				}

				k++;
			}

			j++;
		}

		i++;
	}

	putchar('\n');

	return (0);
}
