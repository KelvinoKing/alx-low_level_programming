#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: Prints out alphabets in lowercase
 * followed by uppercase and a new line
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	unsigned int c = 97;

	while (c != 123)
		putchar(c++);

	c = 65;

	while (c != 91)
		putchar(c++);
	putchar('\n');

	return (0);
}
