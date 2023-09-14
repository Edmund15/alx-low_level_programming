#include <stdio.h>

/**
 * main - Entry point.
 *
 * Description: Program that prints the first 50 Fibonacci numbers,
 * starting with 1 and 2, separated by a comma and a space.
 *
 * Return: Always 0.
 */
int main(void)
{
	long long int fib1 = 1;
	long long int fib2 = 2;
	long long int nextFib;


	printf("%lld, %lld, ", fib1, fib2);

	for (int i = 2; i < 50; i++)
	{
		nextFib = fib1 + fib2;
		printf("%lld", nextFib);

		if (i < 49)
		{
			printf(", ");
		}
		else
		{
			printf("\n");
		}
		fib1 = fib2;
		fib2 = nextFib;
	}
	return (0);
}

