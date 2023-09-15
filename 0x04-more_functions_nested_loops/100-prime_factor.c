#include <stdio.h>
#include <math.h>

/**
  *main - The prime factors of 1231952
  *Return: always 0
  */
int main(void)
{
	long x, maxf;
	long number = 1231952;
	double square = sqrt(number);

	for (x = 2; x <= square; x++)
	{
		if (number % x == 0)
		{
			maxf = x;
			number /= x;
		}
	}
	printf("%ld\n", maxf);
	return (0);
}
