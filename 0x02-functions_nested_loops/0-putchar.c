#include "main.h"
/**
 * main - Entry point
 *
 * Description: Prints -putchar, followed by a new line
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ch[9] = "_putchar";
	int i = 0;

	while (i < 8)
	{
		_putchar(ch[i]);
		i++;
	}
	_putchar('\n');

	return (0);
}
