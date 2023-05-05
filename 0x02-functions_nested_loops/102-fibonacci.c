#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: Print first 50 fibonacci numbers from 1 and 2
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	long int valOne = 1;
	long int valTwo = 2;
	long int nextVal;
	int count = 0;
	long int temp;

	printf("%li, %li, ", valOne, valTwo);

	while (count < 48)
	{
		nextVal = valOne + valTwo;

		if (count < 47)
		{
			printf("%li, ", nextVal);
		}
		else
			printf("%li", nextVal);

		temp = valTwo;
		valTwo = nextVal;
		valOne = temp;
		count++;
	}
	putchar('\n');

	return (0);
}
