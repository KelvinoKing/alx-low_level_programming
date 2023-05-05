#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: Write a program that prints
 * the alphabet in lowercase, followed by a new line.
 * print all letters except q and e
 *
 * Return: Always 0 (Succeess)
 */
int main(void)
{
	unsigned int c = 97;

	while (c != 123)
	{
		if (!(c == 101 || c == 113))
		{
			putchar(c);
		}
		c++;
	}

	putchar('\n');

	return (0);
}
