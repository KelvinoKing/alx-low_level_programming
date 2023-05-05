#include "main.h"
/**
 * print_times_table - Prints the n times table, starting with 0
 *
 * @n: Its the print_times_table function argument of type int
 *
 * Return: void
 */
void print_times_table(int n)
{
	if (n <= 15 && n >= 0)
	{
		int i, j;

		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				int product = i * j;

				if (j == 0)
					_putchar('0');
				else if (product < 10)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					_putchar(product + '0');
				}
				else if (product >= 10 && product < 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar((product / 10) + '0');
					_putchar((product % 10) + '0');
				}
				else if (product >= 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar((product / 100) + '0');
					_putchar((product % 100) / 10 + '0');
					_putchar((product % 100) % 10 + '0');
				}
			}
			_putchar('\n');
		}
	}
}
