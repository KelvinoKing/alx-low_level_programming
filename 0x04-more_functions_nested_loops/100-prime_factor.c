#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	long int num = 612852475143;
	long int primeNum = num;
	long int divisor = 2;

	while (primeNum != divisor)
	{
		if (primeNum % divisor == 0)
		{
			primeNum = primeNum / divisor;
		}
		else
			divisor++;
	}
	printf("%li\n", primeNum);
	return (0);
}
