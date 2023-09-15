#include <stdio.h>
#include <math.h>

/**
 * main - Find and print the largest prime factor of 1231952
 * Return: Always 0
 */
int main(void)
{
	long x, maxf;
	long number = 1231952;
	double square = sqrt(number);

	maxf = 2;

	while (number % 2 == 0)
	{
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
