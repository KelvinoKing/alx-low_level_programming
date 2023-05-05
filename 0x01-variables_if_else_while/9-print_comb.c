#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: Write a program that prints all possible
 * combinations of single-digit numbers.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	unsigned int c = 0;

	while (c < 10)
	{
		putchar(c + '0');
		if (c != 9)
		{
			putchar(',');
			putchar(' ');
		}
		c++;
	}
	putchar('\n');

	return (0);
}
