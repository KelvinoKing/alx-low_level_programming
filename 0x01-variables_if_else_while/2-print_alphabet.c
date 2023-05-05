#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints out all alphabets in lowercase followed by new line
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	unsigned int c = 97;

	while (c != 123)
		putchar(c++);
	putchar('\n');

	return (0);
}
