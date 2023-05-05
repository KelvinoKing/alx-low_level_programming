#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: Prints the sum of all even-valued terms
 * in the Fibonacci sequence whose values do not exceed 4,000,000
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	long int valOne = 0;
	long int valTwo = 1;
	long int nextVal = 0;
	long int temp;
	long int sum = 0;

	while (nextVal <= 4000000)
	{
		nextVal = valOne + valTwo;

		if (nextVal % 2 == 0)
		{
			sum += nextVal;
		}
		temp = valTwo;
		valTwo = nextVal;
		valOne = temp;
	}

	printf("%li\n", sum);

	return (0);
}
