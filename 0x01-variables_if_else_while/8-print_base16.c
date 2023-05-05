#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: Write a program that prints the lowercase
 *  alphabet in reverse, followed by a new line.
 *
 *  Return: Always 0 (Success)
 */
int main(void)
{
	unsigned char c = 0;
	unsigned char d = 97;

	while (c < 10)
	{
		putchar(c + '0');
		c++;
	}

	while (d < 103)
	{
		putchar(d++);
	}
	putchar('\n');

	return (0);
}
