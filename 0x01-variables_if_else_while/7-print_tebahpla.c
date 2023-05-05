#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: Write a program that prints the lowercase
 * alphabet in reverse, followed by a new line.
 *
 * Return: Always 0 (Succeess)
 */
int main(void)
{
	unsigned char c = 122;

	while (c > 96)
		putchar(c--);
	putchar('\n');

	return (0);
}
