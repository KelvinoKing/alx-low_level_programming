#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: Write a program that prints
 * all single digit numbers of base 10 starting
 * from 0, followed by a new line.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	unsigned char c = 0;

	while (c < 10)
		printf("%d", c++);
	putchar('\n');

	return (0);
}
