#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: Prints the first 98 Fibonacci numbers starting with 1 & 2
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	long int valOne = 0;
	long int valTwo = 1;
	long int sum = 0;
	int count = 0;

	while (count < 98)
	{
		sum = valOne + valTwo;
		if (count != 97)
			printf("%li, ", sum);
		else
			printf("%li", sum);

		valOne = valTwo;
		valTwo = sum;

		count++;
	}

	putchar('\n');
	return (0);
}
