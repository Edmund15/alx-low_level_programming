#include <stdio.h>

/**
 * main - Entry point.
 *
 * Description: Program that computes and prints the sum of all the
 * multiples of 3 or 5 below 1024 (excluded).
 *
 * Return: Always 0.
 */
int main(void)
{
	int i = 0;
	int z = 0;


	while (i < 1024)
	{
		if ((i % 3 == 0) || (i % 5 == 0))
		{
			z += i;
		}
		i++;
	}
	printf("%d\n", z);
	return (0);
}

