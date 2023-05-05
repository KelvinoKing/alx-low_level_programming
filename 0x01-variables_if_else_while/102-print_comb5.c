#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: Write a program that prints all
 *  possible combinations of two two-digit numbers.
 *
 *  Return: Always 0 (Success)
 */
int main(void)
{
	unsigned int i, j, k, l;

	i = 0;

	while (i < 10)
	{
		j = 0;
		while (j < 10)
		{
			l = j + 1;
			k = i;

			while (k < 10)
			{
				while (l < 10)
				{
					putchar(i + '0');
					putchar(j + '0');
					putchar(' ');
					putchar(k + '0');
					putchar(l + '0');

					if (i < 9 || j < 8 || k < 9 || l < 9)
					{
						putchar(',');
						putchar(' ');
					}
					l++;
				}
				l = 0;
				k++;
			}
			j++;
		}
		i++;
	}

	putchar('\n');

	return (0);
}


