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
	int i = 0;
	long int j = 1, k = 2;


	while (i < 50)
	{
		printf("%ld", j);

		if (i < 49)
		{
			printf(", ");
		}
		else
		{
			printf("\n");
		}
		long int nextFib = j + k;
		k += j;
		j = nextFib;
		i++;
	}
	return (0);
}
