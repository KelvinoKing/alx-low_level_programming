#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - Prints all natural numbers from n to 98 followed by
 * new line
 *
 * @n: Parameter of the print_to_98 function
 *
 * Return: void
 */
void print_to_98(int n)
{
	if (n > 98)
	{
		while (n >= 98)
		{
			printf("%d", n);

			if (n != 98)
			{
				putchar(',');
				putchar(' ');
			}
			n--;
		}

		putchar('\n');
	}
	else if (n < 98)
	{
		while (n <= 98)
		{
			printf("%d", n);

			if (n != 98)
			{
				putchar(',');
				putchar(' ');
			}
			n++;
		}

		putchar('\n');
	}
	else if (n == 98)
		printf("%d\n", n);
}
