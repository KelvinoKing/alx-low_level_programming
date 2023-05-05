#include "main.h"
/**
 * times_table - Prints the 9 times table starting with 0
 *
 * Description: The function prints the 9 times table, starting with 0
 *
 * Return: void
 */
void times_table(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			int product = i * j;

			if (j == 0)
			{
				_putchar('0');
			}
			else if (product < 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(product + '0');
			}
			else
			{
				int firstVal = product / 10;
				int secondVal = product % 10;

				_putchar(',');
				_putchar(' ');
				_putchar(firstVal + '0');
				_putchar(secondVal + '0');
			}
		}

		_putchar('\n');
	}
}
