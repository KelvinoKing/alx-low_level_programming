#include "main.h"
/**
 * jack_bauer - Prints every minutes of the day
 *
 * Description: Write a function that prints every minute of the day
 *  of Jack Bauer, starting from 00:00 to 23:59.
 *
 *  Return: void
 */
void jack_bauer(void)
{
	int i, j, k, l, m;

	i = 0;
	m = 10;

	while (i < 3)
	{
		if (i == 2)
		{
			m = 4;
		}
		j = 0;

		while (j < m)
		{
			k = 0;

			while (k < 6)
			{
				l = 0;

				while (l < 10)
				{
					_putchar(i + '0');
					_putchar(j + '0');
					_putchar(':');
					_putchar(k + '0');
					_putchar(l + '0');
					_putchar('\n');

					l++;
				}

				l = 0;
				k++;
			}
			j++;
		}
		i++;
	}
}


