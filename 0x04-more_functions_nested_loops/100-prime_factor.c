#include <stdio.h>
#include <math.h>

/**
 * main - Find and print the largest prime factor of 612852475143
 * Return: Always 0
 */
int main(void)
{
	long x, maxf;
	long number = 612852475143;
	long square = sqrt(number);

	maxf = -1;

	while (number % 2 == 0)
	{
		maxf = 2;
		number /= 2;
	}
	
	for (x = 3; x <= square; x += 2)
	{
		while (number % x == 0)
		{
			maxf = x;
			number /= x;
		}
	}

	if (number > 1)
	{
		maxf = number;
	}
	printf("%ld\n", maxf);
	return (0);
}
